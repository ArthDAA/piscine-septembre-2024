/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:58:15 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/18 10:28:42 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	index;

	total = 1;
	index = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (index <= nb)
	{
		total = total * index;
		index++;
	}
	return (total);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/
