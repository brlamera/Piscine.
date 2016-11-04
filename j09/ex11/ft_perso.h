/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 04:37:48 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 04:56:17 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "Mojo"
# include <string.h>

typedef struct			s_perso
{
	char	*name;
	float	life;
	int		age;
	char	profession;
}						t_perso;

#endif
