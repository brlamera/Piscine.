/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:20:58 by blameran          #+#    #+#             */
/*   Updated: 2015/11/06 18:20:59 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*tmp_bis;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp)
		{
			tmp_bis = tmp->next;
			free(tmp);
			tmp = tmp_bis;
		}
		*begin_list = NULL;
	}
}
