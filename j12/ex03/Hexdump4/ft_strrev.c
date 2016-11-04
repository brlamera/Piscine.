/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtroncy <rtroncy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:28:25 by rtroncy           #+#    #+#             */
/*   Updated: 2015/11/06 18:44:15 by rtroncy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	tmp;

	if (str)
	{
		i = 0;
		length = ft_strlen(str);
		while (i < length / 2)
		{
			tmp = str[i];
			str[i] = str[length - i - 1];
			str[length - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}
