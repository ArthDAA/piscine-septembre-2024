/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:33:21 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/08 16:20:40 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr (int nbr)
{
	if (nbr >= 0 && nbr < 10)
	{
		ft_putchar (nbr + '0');
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main()
{
	int	i;
	i = 100; 
	ft_ft(&i);
	ft_putnbr (i);
}
*/
