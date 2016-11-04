/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 05:40:34 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 06:08:21 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 0
# define OPEN 1
# define TRUE 0
# include <unistd.h>

typedef int			t_bool;
typedef struct		s_door
{
	int		state;
}					t_door;

#endif
