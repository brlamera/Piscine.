/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_print_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtroncy <rtroncy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:28:25 by rtroncy           #+#    #+#             */
/*   Updated: 2015/11/06 18:44:15 by rtroncy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int			g_add;
int			g_end;
static int	g_i;
static char	g_tmp[17];
int			g_total_size;

static void	print_point(char *str)
{
	if (ft_strlen(str) <= 7)
		ft_putstr("   |");
	else
		ft_putstr("  |");
	while (*str)
	{
		if (*str == '\a' || *str == '\b' || *str == '\f' || *str == '\n' ||
				*str == '\r' || *str == '\t' || *str == '\v')
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('|');
}

void		hex_print_c(char txt)
{
	if (g_add == 0)
		g_i = 0;
	if (g_i == 0)
		ft_putchar(' ');
	hex_print(txt);
	if (g_i == 7)
		ft_putchar(' ');
	g_tmp[g_i++] = txt;
	if (g_i == 16 || (g_total_size - g_add == 1 && g_end == 1))
	{
		g_tmp[g_i] = '\0';
		g_i = 0;
		print_point(g_tmp);
	}
}
