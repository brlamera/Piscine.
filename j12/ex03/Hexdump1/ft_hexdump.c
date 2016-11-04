/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 22:30:40 by blameran          #+#    #+#             */
/*   Updated: 2016/03/24 17:40:25 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	soffset(int i)
{
	char	base[16] = "0123456789abcdef";
	int		max_offset;
	int		j;
	int		x;

	j = 0;
	x = 0;
	max_offset = 16777216;
	while (i >= 16)
	{
		while (i >= max_offset)
		{
			i -= max_offset;
			j++;
		}
		ft_putchar(base[j]);
		max_offset /= 16;
		j = 0;
		x++;
	}
	ft_putchar(base[i]);
	while (++x != 7)
		ft_putchar('0');
}

void	soffset2(int i)
{
	char	base[16] = "0123456789abcdef";
	int		max_offset;
	int		j;
	int		x;

	j = 0;
	x = 0;
	max_offset = 268435456;
	while (i >= 16)
	{
		while (i >= max_offset)
		{
			i -= max_offset;
			j++;
		}
		ft_putchar(base[j]);
		max_offset /= 16;
		j = 0;
		x++;
	}
	ft_putchar(base[i]);
	while (++x != 8)
		ft_putchar('0');
}

void	sous_programme_relou(char buffer)
{
	ft_putstr("  ");
	if (buffer == '\n' || buffer == '\t' || buffer == '\r' || buffer == '\v' ||
			buffer == '\f')
		write(1, ".", 1);
}

int		god_pidgeot(int fd, int size, int j, int argc)
{
	char	buffer;
	char	base[17] = "0123456789abcdef";
	int		i;
	int		size_2;

	while (read(fd, &buffer, 1) != 0)
	{
		size++;
		i = 0;
		ft_putchar(' ');
		while (buffer >= 16)
		{
			buffer -= 16;
			i++;
		}
		ft_putchar(base[i]);
		i = 0;
		while (buffer--)
			i++;
		ft_putchar(base[i]);
		if (size % 16 == 0)
		{
			ft_putchar('\n');
			soffset2(size);
		}
	}
	if (j == (argc - 1))
	{
		size_2 = size;
		while (size_2 % 16)
		{
			ft_putstr("   ");
			size_2++;
		}
	}
	return (size);
}


int		all_pray_the_helix(int fd, int size)
{
	char	buffer;

	size = 0;
	while (read(fd, &buffer, 1) != 0)
	{
		size++;
		if (size == 1 || size == 17)
			ft_putchar('|');
		if (buffer > 0 && buffer < 32)
			sous_programme_relou(buffer);
		else
		{
			write(1, &buffer, 1);
		}
	}
	return(size);
}

int		curse_the_flareon(int fd, int size, int j, int argc)
{
	char	buffer;
	char	base[17] = "0123456789abcdef";
	int 	i;
	int		size_2;

	while (read(fd, &buffer, 1) != 0)
	{
		size++;
		i = 0;
		ft_putchar(' ');
		while (buffer >= 16)
		{
			buffer -= 16;
			i++;
		}
		ft_putchar(base[i]);
		i = 0;
		while (buffer--)
			i++;
		ft_putchar(base[i]);
		if (size % 16 == 0)
		{
			ft_putchar('\n');
			soffset(size);
		}
	}
	if (j == (argc - 1))
	{
		size_2 = size;
		while (size_2 % 16)
		{
			ft_putstr("   ");
			size_2++;
		}
		ft_putchar('\n');
		soffset(size);
		ft_putchar('\n');
	}
	return (size);
}

void	hexilla(int argc, char **argv)
{
	int					fd;
	int					j;
	int					size;

	j = 1;
	size = 0;
	ft_putstr("0000000");
	while (j < argc)
	{
		fd = open(argv[j], O_RDONLY);
		if (fd > 0)
		{
			size = curse_the_flareon(fd, size, j, argc);
		}
		close(fd);
		j++;
	}
}

void	gororin(int argc, char **argv)
{
	int	fd;
	int	i;
	int	size;

	i = 2;
	size = 0;
	ft_putstr("00000000");
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 3)
		{
		all_pray_the_helix(fd, size);
		}
		close(fd);
		i++;
	}
}



int		main(int argc, char **argv)
{
	char	buffer;

	if (argc < 2)
	{
		while (read(0, &buffer, 1) != 0)
			;
	}
	if (!(ft_strcmp(argv[1], "-C") == 0))
		hexilla(argc, argv);
	else
		gororin(argc, argv);
	return (0);
}
