# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 16:13:34 by chenglee          #+#    #+#              #
#    Updated: 2023/02/21 20:27:04 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix ./srcs/, $(SRC)}
HEAD = ./includes/ft.h
OBJECT = ${SRCS:.c=.o}
CFLAGS = -c -Wall -Wextra -Wall -I$(HEAD)
OUTPUT = libft.a

.PHONY: all
all: $(OUTPUT)

$(OUTPUT): $(OBJECT)
	ar -rcs $@ $<

$(OBJECT): $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJECT)

.PHONY: fclean
fclean:
	rm -rf $(OUTPUT) $(OBJECT)

.PHONY: re
re: fclean all
