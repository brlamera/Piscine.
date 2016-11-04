/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcreatecpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 16:24:48 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 18:33:25 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcreatecpy(char *src)
{
	char	*str;
	int		i;

	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
