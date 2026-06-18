# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jacavalc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 14:48:19 by jacavalc          #+#    #+#              #
#    Updated: 2026/06/18 15:38:44 by jacavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

CFILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strncmp.c \
		ft_atoi.c

OFILES = $(CFILES:.c=.o)

all: $(NAME) 
$(NAME): $(OFILES)
#All é a regra #ar é o comando para criar a biblioteca# Flag I procura meu arquivo .h
	ar rcs $(NAME) $(OFILES)
%.o:%.c
	$(CC) $(CFLAGS) -I . -c $< -o $@
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean
	all 
.PHONY: all clean fclean re