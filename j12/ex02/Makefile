# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blameran <blameran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/14 14:59:52 by blameran          #+#    #+#              #
#    Updated: 2016/03/14 15:00:18 by blameran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_tail.o

clean:
	/bin/rm -f ft_tail.o

fclean:
	/bin/rm -f $(NAME)

re:
	fclean all
