/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 18:06:58 by blameran          #+#    #+#             */
/*   Updated: 2015/10/28 18:07:03 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*s1;
	char			*s2;
	unsigned int	len;

	s1 = dest;
	s2 = src;
	len = size;
	if (len != 0)
	{
		while (--len != 0)
		{
			if ((*s1++ = *s2++) == '\0')
				break ;
		}
	}
	if (len == 0)
	{
		if (size != 0)
			*s1 = '\0';
		while (*s2++)
			;
	}
	return (s2 - src - 1);
}
