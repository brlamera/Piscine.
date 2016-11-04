/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 17:32:51 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 17:58:15 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_char_buffer(char *buffer)
{
	char	*mod_buffer;

	if (!(mod_buffer = (char *)malloc(sizeof(char) * ft_strlen(buffer) + 3)))
		return (NULL);
	ft_buffer_cpy(buffer, mod_buffer);
	return (mod_buffer);
}

void	ft_buffer_cpy(char *buffer, char *mod_buffer)
{
	int i;
	int j;

	i = 1;
	j = 0;
	mod_buffer[0] = '|';
	while (buffer[j])
	{
		if (buffer[j] <= 31 || buffer[j] == 127)
			mod_buffer[i] = '.';
		else
			mod_buffer[i] = buffer[j];
		i++;
		j++;
	}
	mod_buffer[i] = '|';
	mod_buffer[i + 1] = '\0';
}
