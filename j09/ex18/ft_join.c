/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:40:50 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 11:05:53 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_carac(char **tab)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	i = 0;
	while (tab[i])
	{
		while (tab[i][j] != '\0')
		{
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	return (k);
}

char	*ft_sep(char *str, char *sep)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	while (sep[j] != '\0')
	{
		str[i] = sep[j];
		i++;
		j++;
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_join2(char *tab, char *str, int i)
{
	int		k;

	i = 0;
	k = 0;
	while (tab[k] != '\0')
	{
		str[i] = tab[k];
		i++;
		k++;
	}
	return (str);
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (tab[i])
		i++;
	j = (ft_carac(tab) + i * ft_strlen(sep));
	str = malloc(sizeof(char) * j);
	i = 0;
	j = 0;
	while (tab[i])
	{
		ft_join2(tab[i], str, k);
		j = 0;
		if (tab[i + 1])
			ft_sep(str, sep);
		i++;
	}
	str[k] = '\0';
	return (str);
}
