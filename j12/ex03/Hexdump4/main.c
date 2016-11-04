/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtroncy <rtroncy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:28:25 by rtroncy           #+#    #+#             */
/*   Updated: 2015/11/06 18:44:15 by rtroncy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	g_add;
int	g_option;
int	g_end;

int	main(int argc, char **argv)
{
	g_add = 0;
	if (!(ft_strcmp(argv[1], "-C")))
		g_option = 1;
	else
		g_option = 0;
	g_end = argc - 1 - g_option;
	hexdump(argv);
	return (0);
}
