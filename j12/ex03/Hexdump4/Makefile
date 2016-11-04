#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtroncy <rtroncy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 18:28:11 by rtroncy           #+#    #+#              #
#    Updated: 2015/11/06 18:28:13 by rtroncy          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_hexdump
SRCS = *.c
FLAG = -Wall -Wextra -Werror
OBJ = *.o

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(SRCS) -c
	@gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
