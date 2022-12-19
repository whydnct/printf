# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/19 14:25:46 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBS = $(LIB_DIR)/libft.a
LIB_DIR = libft

SRC =	choose_printer.c \
		ft_printf.c \
		print_char.c \
		print_int.c \
		print_long.c  
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
