/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:29:15 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/18 10:39:59 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 2;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		res = nb * res;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(2, 6));
}
*/
