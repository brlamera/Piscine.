/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 21:30:18 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 22:45:05 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	j = 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			tmp = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = tmp;
			i = 1;
		}
		i++;
	}
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
