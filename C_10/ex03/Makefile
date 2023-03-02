# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 17:45:09 by chenglee          #+#    #+#              #
#    Updated: 2023/03/02 18:14:46 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDIR = ./include/
SDIR = ./srcs/
SRC = calculations.c error.c help.c main.c read.c
HEAD = ft.h
SRCS = ${addprefix $(SDIR), $(SRC)}
HEADS = ${addprefix $(HDIR), $(HEAD)}
OBJECTS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -I
OUTPUT = ft_hexdump

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CC) -fsanitize=address -g3 -o $(OUTPUT) $(OBJECTS)

$(OBJECTS): $(SDIR)%.o: $(SDIR)%.c $(HEADS)
	$(CC) $(CFLAGS) $(HDIR) -o $@ $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean re
