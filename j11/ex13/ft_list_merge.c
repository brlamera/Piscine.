/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:24:53 by blameran          #+#    #+#             */
/*   Updated: 2015/11/06 18:24:56 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	list = *begin_list1;
	while (list->next)
		list = list->next;
	list->next = begin_list2;
}
