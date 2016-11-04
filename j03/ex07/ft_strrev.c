/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 00:21:33 by blameran          #+#    #+#             */
/*   Updated: 2015/10/18 02:19:06 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		erieur;
	int		erim;
	char	lee;

	erieur = 0;
	erim = 0;
	while (str[erieur] != '\0')
		erieur++;
	while (erim <= erieur)
	{
		erieur--;
		lee = str[erim];
		str[erim] = str[erieur];
		str[erieur] = lee;
		erim++;
	}
	return (str);
}
