/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 13:15:29 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 18:09:56 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_buffer_list	*ft_create_elem(char *buffer, int ret)
{
	t_buffer_list	*elem;

	if (!(elem = (t_buffer_list *)(malloc(sizeof(t_buffer_list)))))
		return (NULL);
	elem->hex_buffer = buffer;
	elem->char_buffer = ft_char_buffer(buffer);
	elem->ret = ret;
	if (ret > 16)
		elem->error = 2;
	else
		elem->error = 1;
	elem->next = NULL;
	return (elem);
}
