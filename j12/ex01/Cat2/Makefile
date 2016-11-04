# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blameran <blameran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/28 00:39:35 by blameran          #+#    #+#              #
#    Updated: 2016/03/28 00:39:53 by blameran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = ft_cat.c
OBJ = ft_cat.o
HDR = -I j12.h
RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAG) $(SRC) $(HDR)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
