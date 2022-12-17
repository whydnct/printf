# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/17 11:56:12 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libprintf.a

# Sources

SRC = $(wildcard libft/*.c) $(wildcard *.c)
OBJ = $(SRC:.c=.o) 

# Rules

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -c $(SRC) libft/libft.a
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
