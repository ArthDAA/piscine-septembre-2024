/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:30:54 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/12 11:26:24 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0' && a != 0)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			a = 1;
			i++;
		}
		else
		{
			a = 0;
		}
	}
	return (a);
}
/* 
int main(void)
{
	char c[] = "prout";
	printf("%d\n", ft_str_is_alpha(c));
}
 */
