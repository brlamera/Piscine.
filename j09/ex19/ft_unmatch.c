/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:41:08 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 12:43:56 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int		j;
	int		i;
	int		k;
	int		l;

	i = 0;
	while (i <= length)
	{
		l = 0;
		k = 0;
		j = tab[i];
		while (k <= length)
		{
			if (tab[k] == j)
				l++;
			k++;
		}
		if (l % 2 != 0)
			return (j);
		i++;
	}
	return (0);
}
