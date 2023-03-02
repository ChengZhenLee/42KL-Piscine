# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 21:33:44 by chenglee          #+#    #+#              #
#    Updated: 2023/02/28 16:33:15 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR = ./srcs/
HDIR = ./include/
SRC = ft_cat.c
SRCS = ${addprefix $(SDIR), $(SRC)}
OBJECT = ${SRC:.c=.o}
OBJECTS = ${addprefix $(SDIR), $(OBJECT)}
HEAD = ft.h
HEADS = ${addprefix $(HDIR), $(HEAD)}
CC = cc
CFLAG = -c -Wall -Werror -Wextra -I
OUTPUT = ft_cat

.PHONY: all
all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CC) -o $@ $<

$(OBJECTS): $(SRCS) $(HEADS)
	$(CC) $(CFLAG) $(HDIR) -o $@ $<

.PHONY: clean
clean:
	rm -f $(SDIR)*.o

.PHONY: fclean
fclean: clean
	rm -f $(OUTPUT)

.PHONY: re
re: fclean all
