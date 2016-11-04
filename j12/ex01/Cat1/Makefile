# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blameran <blameran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/14 14:58:42 by blameran          #+#    #+#              #
#    Updated: 2016/03/14 14:59:07 by blameran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_cat.o

clean:
	/bin/rm -f ft_cat.o

fclean:
	/bin/rm -f $(NAME)

re:
	fclean all
