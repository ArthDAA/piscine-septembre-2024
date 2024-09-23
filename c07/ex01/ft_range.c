/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:05:43 by ade-assi          #+#    #+#             */
/*   Updated: 2024/09/23 13:49:32 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	dest = malloc(sizeof((int)*(max - min) + 1));
	if (!dest)
	{
		return (NULL);
	}
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}

int main(void)
{
    int min = 5;
    int max = 12;
    int *range;
    int i = 0;

    range = ft_range(min, max);
    if (!range)
        return (1); // Quitte si le pointeur est nul

    while (i < (max - min))
    {
        printf("%d ", range[i]);
        i++;
    }

    printf("\n");
}
