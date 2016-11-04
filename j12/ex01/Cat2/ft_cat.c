/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 00:42:18 by blameran          #+#    #+#             */
/*   Updated: 2016/03/28 00:53:45 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "j12.h"

void	ft_put_error(char *str)
{
	int		i;

	i = -1;
	while (str && str[++i])
		;
	write(2, str, i);
}

void	ft_print_stdin(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
		write(1, &buf, 1);
}

void	zero_param(char *av)
{
	ft_put_error("ft_cat: ");
	ft_put_error(av);
	ft_put_error(": No such file or directory\n");
}

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	char	*buf;

	i = 0;
	if (ac < 2)
		ft_print_stdin();
	else
	{
		while (++i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (fd >= 0)
				while (read(fd, &buf, 1) != 0)
					write(1, &buf, 1);
			else
				zero_param(av[i]);
			close(fd);
		}
	}
	return (0);
}
