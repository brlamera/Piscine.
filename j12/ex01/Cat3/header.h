/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blameran <blameran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 18:16:50 by blameran          #+#    #+#             */
/*   Updated: 2016/03/28 18:23:17 by blameran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define BUF_SIZE 29000

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_read(int fileds);
int		ft_display_error(int ac);
int		ft_open_n_error(char *file_name);
int		ft_strlen(char *str);

#endif
