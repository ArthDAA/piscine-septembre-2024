/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:09:51 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/17 18:22:04 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 2)
		return (ft_find_next_prime(nb + 1));
	while (i > 1)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(86784));
}
*/
