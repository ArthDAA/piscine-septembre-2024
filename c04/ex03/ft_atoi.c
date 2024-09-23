/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:28:56 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/15 19:06:04 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num_str;
	int	sign;

	i = 0;
	num_str = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num_str = num_str * 10 + (str[i] - '0');
		i++;
	}
	return (num_str * sign);
}
/*#include <stdio.h>
int main()
{
	char c [] = " ---+--+1234ab567";
	printf("%d", ft_atoi(c));
}
*/
