# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 16:54:02 by chenglee          #+#    #+#              #
#    Updated: 2023/02/23 21:47:39 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDIR = ./include/
SDIR = ./srcs/
HEAD = ft.h
HEADS = ${addprefix $(HDIR), $(HEAD)}
SRC = help.c put.c main.c
SRCS = ${addprefix $(SDIR), $(SRC)}
OBJECT = ${SRC:.c=.o}
OBJECTS = ${addprefix $(SDIR), $(OBJECT)}
CC = cc
CFLAGS = -c -Wall -Wextra -Werror -I
OUTPUT = ft_tail

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CC) -o $(OUTPUT) $(OBJECTS)

$(OBJECTS): $(SDIR)%.o: $(SDIR)%.c $(HEADS)
	$(CC) $(CFLAGS) $(HDIR) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean re
