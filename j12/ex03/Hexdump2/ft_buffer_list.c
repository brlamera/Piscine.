/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 17:02:56 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 17:17:40 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_create_list(char *file_name, t_buffer_list **begin_list)
{
	int			fd;

	if ((fd = open(file_name, O_RDONLY)) == -1)
		ft_list_push_back(begin_list, ft_error_elem(file_name));
	else
	{
		ft_read(fd, begin_list);
		if (close(fd) == -1)
			ft_list_push_back(begin_list, ft_error_elem(file_name));
	}
}

void	ft_read(int fd, t_buffer_list **begin_list)
{
	int			ret;
	static int	c_read;
	char		*buffer;

	buffer = (char *)malloc(sizeof(char) * 17);
	while ((ret = read(fd, buffer, 16 - c_read)) != 0)
	{
		buffer[ret] = '\0';
		ft_list_push_back(begin_list, ft_strcreatecpy(buffer));
		c_read = 0;
		if (ret < 16)
			c_read = ret;
	}
	free(buffer);
}
