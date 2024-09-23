/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:41:23 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/12 20:05:38 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr < 10)
	{
		ft_putchar (nbr + '0');
	}
	else if (nbr < 0)
	{
		ft_putchar ('-');
		ft_putchar (nbr + '0');
	}
	else
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
}

int main()
{
	ft_putnbr(-214748364);
}

