/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 17:27:10 by blameran          #+#    #+#             */
/*   Updated: 2015/10/18 17:27:22 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int b;

	i = 1;
	b = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		b = 1;
	while (i <= nb - 1)
	{
		b = i * b;
		i++;
	}
	return (b);
}
