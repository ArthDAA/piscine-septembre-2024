/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:35:30 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/08 18:03:51 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar (n + '0');
	}
	else if (n < 0)
	{
		ft_putchar ('-');
		ft_putchar (n + '0');
	}
	else
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
}
*/
void	ft_swap(int *a, int *b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}
/*
int  main()
{
	int i = 1 ;
	int j = 2 ;
	ft_swap (&i, &j);
	ft_putnbr (i);
	ft_putnbr (j);
}
*/
