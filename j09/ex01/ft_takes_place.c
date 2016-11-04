/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 18:03:40 by blameran          #+#    #+#             */
/*   Updated: 2015/10/22 18:18:10 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour > 0 && hour < 12)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
}
