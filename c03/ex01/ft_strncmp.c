/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:18:08 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/12 20:00:19 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		n = n - 1;
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i != n)
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	char c[] = "b";
	char d[] = "ywefjkds;aodfgb";
	printf("%d\n", ft_strncmp(c, d, 0));
*/
