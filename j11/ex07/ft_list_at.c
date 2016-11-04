/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:21:42 by blameran          #+#    #+#             */
/*   Updated: 2015/11/06 18:21:52 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == NULL)
		return (NULL);
	else if (nbr == 0)
		return (begin_list);
	else
		return (ft_list_at(begin_list->next, nbr - 1));
}
