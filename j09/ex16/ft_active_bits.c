/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:40:05 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 10:40:10 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits2(int value)
{
	unsigned int	j;
	int				i;

	j = 0;
	i = -2147483648;
	while (i < 0)
	{
		if (value <= i)
		{
			j++;
			value = value - i;
		}
		i = i / 2;
	}
	return (j);
}

unsigned int	ft_active_bits(int value)
{
	unsigned int	j;
	int				i;

	i = (2147483647 / 2) + 1;
	j = 0;
	if (value == 2147483648)
		return (31);
	if (value > 0)
	{
		while (i > 0)
		{
			if (value >= i)
			{
				value = value - i;
				j++;
			}
			i = i / 2;
		}
	}
	if (value < 0)
	{
		j = ft_active_bits2(value);
	}
	return (j);
}
