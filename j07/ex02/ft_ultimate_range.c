/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 14:56:52 by blameran          #+#    #+#             */
/*   Updated: 2015/10/30 17:03:35 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min < max)
	{
		tab = (int*)malloc(sizeof(int) * (max - min));
		if (tab == NULL)
			return (0);
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
		return (i);
	}
	else
	{
		range = NULL;
		return (0);
	}
}
