# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:31:05 by aperez-m          #+#    #+#              #
#    Updated: 2022/12/11 08:45:11 by aperez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = \
ft_atoi.c \
ft_bzero.c \
ft_isascii.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_calloc.c \
ft_memchr.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c

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
