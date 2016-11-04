/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 16:33:08 by blameran          #+#    #+#             */
/*   Updated: 2015/10/18 16:57:00 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char x, char y)
{
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	ft_putchar(' ');
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
	if (x != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		if (b == 100)
		{
			a += 1;
			b = 0;
		}
		if (a >= b)
			b = a + 1;
		ft_print(a, b);
		b += 1;
	}
}
