/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:06:32 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/09/08 11:04:57 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_top_line0(int x)
{
	int	line;

	line = 1;
	while (line <= x)
	{
		if (line == 1)
			ft_putchar('o');
		else if (line == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		line++;
	}
	ft_putchar('\n');
}

void	write_mid_lines0(int x)
{
	int	line;

	line = 1;
	while (line <= x)
	{
		if (line == 1)
			ft_putchar('|');
		else if (line == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		line++;
	}
	ft_putchar('\n');
}

void	write_bottom_line0(int x)
{
	int	line;

	line = 1;
	while (line <= x)
	{
		if (line == 1)
			ft_putchar('o');
		else if (line == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		line++;
	}
	ft_putchar('\n');
}

void	rush(int nbline, int nbcol)
{
	int	line;
	int	col;

	line = 1;
	col = 1;
	while (line <= nbcol)
	{
		if (line == 1)
			write_top_line0(nbline);
		else if (line != 1 && line != nbcol)
			write_mid_lines0(nbline);
		else
			write_bottom_line0(nbline);
		line++;
	}
}
