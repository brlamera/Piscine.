/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 13:27:53 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 18:23:03 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_error_elem(char *file_name)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(file_name) + 38))))
		return (NULL);
	str = ft_strconcat("hexdump: ", file_name);
	str = ft_strconcat(str, ": No such file or directory\n");
	return (str);
}

char	*ft_error_fd(char *file_name)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(file_name) + 32))))
		return (NULL);
	str = ft_strconcat("hexdump: ", file_name);
	str = ft_strconcat(str, ": Bad file descriptor\n");
	return (str);
}

int		ft_bad_fd(t_buffer_list **begin_list, int ac, char **av)
{
	t_buffer_list	*elem;
	int				fd_fail;

	elem = *begin_list;
	fd_fail = (ft_strcmp(av[1], "-C")) ? 0 : 1;
	while (elem)
	{
		if (elem->error == 2)
			fd_fail++;
		elem = elem->next;
	}
	if (fd_fail == ac - 1)
	{
		ft_list_push_back(begin_list, ft_error_fd(av[ac - 1]));
		return (1);
	}
	return (0);
}
