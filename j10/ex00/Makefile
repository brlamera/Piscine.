#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtroncy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/21 15:22:00 by rtroncy           #+#    #+#              #
#    Updated: 2015/07/21 17:04:09 by rtroncy          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC = ./srcs/*.c

SRC2 = ./includes/*.h

FLAGS = -Wall -Wextra -Werror

LIB = libft.a


all:
	gcc -c $(FLAGS) -I $(SRC) $(SRC2)
	ar rc $(LIB) *.o
	ranlib $(LIB)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(LIB)

re: fclean all