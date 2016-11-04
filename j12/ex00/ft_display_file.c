/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 14:57:34 by blameran          #+#    #+#             */
/*   Updated: 2016/03/14 14:57:57 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_display_file(char **argv)
{
	int		fd;
	char	*str1;

	fd = open(argv[1], O_RDONLY);
	while (read(fd, &str1, 1) != 0)
	{
		write(1, &str1, 1);
		str1++;
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
	}
	if (argc == 2)
	{
		ft_display_file(argv);
	}
	return (0);
}
