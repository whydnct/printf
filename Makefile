# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/18 09:42:39 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBS = $(LIB_DIR)/libft.a
LIB_DIR = libft

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_DIR)
	@cp $(LIBS) .
	@mv libft.a $(NAME)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIB_DIR)

fclean: clean
	@make fclean -C $(LIB_DIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
