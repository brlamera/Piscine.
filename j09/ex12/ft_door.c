/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 05:43:51 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 06:09:04 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str, 1);
		i++;
	}
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	state = CLOSE;
	return (TRUE);
}

t_bool	open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	state = OPEN;
	return (TRUE);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state = OPEN);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state = CLOSE);
}
