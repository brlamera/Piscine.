/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:46:59 by blameran          #+#    #+#             */
/*   Updated: 2015/10/22 21:53:06 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if ((i > j && i < k) || (i > k && i < j))
		return (i);
	else if ((k > j && k < i) || (k > i && k < j))
		return (k);
	else if ((j > k && j < i) || (j > i && j < k))
		return (j);
	else if ((i == j) || (j == k) || (k == i))
		return (0);
	else
		return (0);
}
