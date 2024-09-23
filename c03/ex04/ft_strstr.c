/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:20:48 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/15 11:47:36 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	index;

	i = 0;
	j = 0;
	index = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[index + 1]);
			else
			{
				i++;
				j++;
			}
		}
		index = i;
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char c[] = "grokakadeouf";
	char to_find[] = "kaka";
	printf("%s\n", ft_strstr(c, to_find));
}
*/
