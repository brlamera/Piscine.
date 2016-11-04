# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blameran <blameran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/27 12:16:01 by blameran          #+#    #+#              #
#    Updated: 2016/03/27 12:17:57 by blameran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = main.c \
	  column.c \
	  print_str.c \
	  putnbr_base.c \
	  ll.c \
	  prlanorm.c
OBJ = main.o \
	  column.o \
	  print_str.o \
	  putnbr_base.o \
	  ll.o \
	  prlanorm.o
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
