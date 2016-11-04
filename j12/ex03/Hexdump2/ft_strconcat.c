/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 16:18:13 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 18:35:48 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strconcat(char *s1, char *s2)
{
	char	*ret;
	int		len1;
	int		len2;
	int		i;
	int		j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = '\0';
	return (ret);
}
