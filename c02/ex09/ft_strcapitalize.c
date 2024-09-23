/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:48:39 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/12 11:25:35 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < '0') || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str [i - 1] < 'a')
				|| (str [i - 1] > 'z'))
				str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return (str);
}
/* 
int main(void)
{
	char c[] ="jAdE-aURE l'hABitE 00000000  000bWa{AhJ tEst Te tE eE Ee";
	printf("%s\n", ft_strcapitalize(c));
}
 */
