#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else
		return (nb);
}

int	getmult(int nb)
{
	if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(int n, t_list *tab, int *first)
{
	int i;
	int mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0 && mult != 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int main(int ac, char **av)
{
	t_list *tab;
	int *first;
	int addr_first;

	addr_first = 1;
	first = &addr_first;

	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = process("numbers.dict");
		if (!tab) 
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
		ft_print(ft_atoi(av[1]), tab, first);
		free_list(tab, 41);
	}
	else if (ac == 3)
	{
		if (ft_atoi(av[2]) < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = process(av[1]);
		if (!tab) 
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
		ft_print(ft_atoi(av[2]), tab, first);
		free_list(tab, 41);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	write(1, "\n", 1);
	return (0);
}
