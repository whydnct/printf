# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/12 14:20:15 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libprintf.a

# Sources

SRC = 

OBJ = $(SRC:.c=.o) 

# Rules

all: $(NAME)

$(NAME): 
	@$(CC) $(FLAGS) -c $(SRC) 
	@ar -rcs $(NAME) $(OBJ) 

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
