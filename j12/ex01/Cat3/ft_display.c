/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 18:39:27 by blameran          #+#    #+#             */
/*   Updated: 2016/03/28 18:48:35 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	int fileds;
	int i;

	if (ft_display_error(ac) == 1)
		return (0);
	i = 1;
	while (i < ac)
	{
		if ((fileds = ft_open_n_error(av[i])) >= 0)
		{
			ft_read(fileds);
			if (close(fileds) == -1)
			{
				write(2, "close() error\n", 14);
				return (1);
			}
		}
		i++;
	}
	return (0);
}
