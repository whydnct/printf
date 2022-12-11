# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/11 08:49:05 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libprintf.a

SRC = 

OBJ = $(SRC:.c=.o) 

all: $(NAME)

$(NAME): 
	@$(CC) $(FLAGS) -c $(SRC) 
	@ar -rcs $(NAME) $(OBJ) 

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
