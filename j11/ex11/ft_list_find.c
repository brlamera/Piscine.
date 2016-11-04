/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:23:51 by blameran          #+#    #+#             */
/*   Updated: 2015/11/06 21:06:55 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
			return (list);
		list = list->next;
	}
	return (0);
}
