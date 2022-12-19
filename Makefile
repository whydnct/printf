# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/19 16:40:40 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBS = $(LIB_DIR)/libft.a

LIB_DIR = libft

SRC =	choose_printer.c \
		ft_printf.c \
		print_int.c \
		print_long.c  

OBJS = $(SRC:.c=.o) 

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@make -C $(LIB_DIR)
	@mv $(LIBS) $(NAME)
	@ar -rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIB_DIR)

fclean: clean
	@make fclean -C $(LIB_DIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
