# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blameran <blameran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/14 14:54:08 by blameran          #+#    #+#              #
#    Updated: 2016/03/14 14:55:22 by blameran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_display_file.c
INCLUDES =
OBJETS = ft_display_file.o
NAME = ft_display_file
COMPILER = gcc
OPTIONSCOMP1 = -o
OPTIONSCOMP2 = -c
FLAGS = -Wall -Wextra -Werror

all:
	$(COMPILER) $(OPTIONSCOMP2) $(FLAGS) $(SRC)
	$(COMPILER) $(OPTIONSCOMP1) $(NAME) $(OBJETS)

clean:
	/bin/rm -f $(OBJETS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
