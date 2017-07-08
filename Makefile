# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/11 01:46:18 by dmaznyts          #+#    #+#              #
#    Updated: 2017/03/06 21:08:17 by dmaznyts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

CC = gcc

OBJ = fillit_main.o ft_put_details.o ft_create_map.o ft_strlen.o ft_strcpy.o \
	ft_expand_map.o ft_print_on_map.o validator.o validator_func.o \
	validator_extras.o

HEADER = -I fillit.h

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(HEADER)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
