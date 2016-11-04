/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:44:11 by blameran          #+#    #+#             */
/*   Updated: 2015/10/21 18:46:03 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	while (argv[0][argc - 1] != '\0')
	{
		ft_putchar(argv[0][argc - 1]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
