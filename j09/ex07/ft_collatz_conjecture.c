/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 00:12:04 by blameran          #+#    #+#             */
/*   Updated: 2015/10/23 00:19:00 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int vol;

	vol = 0;
	if (base == 1)
	{
		return (0);
	}
	if (base % 2 == 0)
		vol = (ft_collatz_conjecture(base / 2) + 1);
	else
		vol = (ft_collatz_conjecture(base * 3 + 1) + 1);
	return (vol);
}
