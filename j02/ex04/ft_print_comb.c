/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 01:25:06 by blameran          #+#    #+#             */
/*   Updated: 2015/10/18 16:22:44 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	while (c <= '7')
	{
		d = c;
		while (d++ <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u++);
				if (c != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		c++;
	}
}
