/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:40:30 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 10:42:15 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int		i;
	int		j;

	j = tab[0];
	i = 0;
	while (i <= length)
	{
		i++;
		if (tab[i] > j)
			j = tab[i];
	}
	return (j);
}