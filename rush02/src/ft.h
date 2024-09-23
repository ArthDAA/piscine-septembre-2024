/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-assi <ade-assi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:20:06 by davgarri          #+#    #+#             */
/*   Updated: 2024/09/22 15:28:14 by ade-assi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct	s_list
{
	int	nb;
	char	*val;
}		t_list;

int	ft_atoi(const char *str);
long long ft_atoll(const char *str); // Déclaration de ft_atoll
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(int fd);
char	*ft_getval(int fd, char *c);
t_list	*process(char *file);
void	ft_print(long long n, t_list *tab, int *first); // Déclaration de ft_print

#endif



