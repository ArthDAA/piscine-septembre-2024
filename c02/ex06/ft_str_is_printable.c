/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:42:49 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/12 11:35:57 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0' && a != 0)
	{
		if (str[i] > 31 && str[i] <= 127)
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
