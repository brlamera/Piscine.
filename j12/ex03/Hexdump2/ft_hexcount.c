/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/26 13:47:45 by blameran          #+#    #+#             */
/*   Updated: 2016/03/26 18:23:29 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_hexcount(int n, char *option)
{
	char	*hexcount;
	int		len;
	int		nb_dig;

	hexcount = ft_itoa_base(n, 16);
	len = ft_strlen(hexcount);
	nb_dig = (ft_strcmp(option, "-C")) ? 7 : 8;
	while (len < nb_dig)
	{
		ft_putnbr(0);
		len++;
	}
	ft_putstr(hexcount);
}
