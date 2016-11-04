/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 12:58:18 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 12:58:23 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_compare(char *str)
{
	int		j;

	j = 0;
	while (str[i] == find[j] && find[j] != '\0'
			&& str[i] != '\0' && str[i] != ' ' && str[i] != '	')
	{
		i++;
		j++;
	}
	if (find[j] == '\0' && (str[i] == '\0' || str[i] == ' ' || str[i] == '	'))
		return (1);
	return (0);
}

char	*ft_lower_case(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		ft_check(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	ft_lower_case(str);
	while (str[i] == ' ' || str[i] == '	')
		i++;
	if (str[i] == 'a')
		j = ft_compare(str, "attack", i);
	else if (str[i] == 'p')
	{
		j = ft_compare(str, "president", i);
		if (j == 0)
			j = ft_compare(str, "powers", i);
	}
	return (j);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		j = ft_check(argv[i]);
		if (j == 1)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
