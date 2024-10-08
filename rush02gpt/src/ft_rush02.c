#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getnb(int fd)
{
	int	i;
	char	c[0];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';  // Null-terminate the string
	return (str);
}

char	*ft_getval(int fd)
{
	int	i;
	char	c[0];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] != '\n' && c[0] != '\0')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';  // Null-terminate the string
	return (str);
}

t_list	*process(char *file)
{
	int	i;
	int	fd;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	fd = open(file, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * 42))) 
		exit(1);
	i = 0;
	while (i < 41) 
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}
