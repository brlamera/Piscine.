# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blameran <blameran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/28 18:43:11 by blameran          #+#    #+#              #
#    Updated: 2016/03/28 18:47:59 by blameran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAG = -Wall -Wextra -Werror
FILES = ft_putchar.c ft_putstr.c ft_error.c \
		ft_display.c ft_strlen.c

OBJ = ft_putchar.o ft_putstr.o ft_error.o \
		ft_display.o ft_strlen.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
