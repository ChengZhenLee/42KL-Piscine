# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 20:18:44 by chenglee          #+#    #+#              #
#    Updated: 2023/02/22 20:54:50 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD = ft.h
SRC = ft_display_file.c
OBJECT = ${SRC:.c=.o}
CC  = cc
CFLAGS = -c -Wall -Wextra -Werror
OUTPUT = ft_display_file

.PHONY: all
all: $(OUTPUT)

$(OUTPUT): $(OBJECT)
	$(CC) -o $@ $<

$(OBJECT): $(SRC) $(HEAD)
	$(CC) $(CFLAGS) -o $@ $(SRC)

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(OUTPUT)

.PHONY: re
re: fclean all
