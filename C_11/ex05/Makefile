# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 17:43:03 by chenglee          #+#    #+#              #
#    Updated: 2023/03/02 20:29:18 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR = ./srcs/
HDIR = ./includes/
SRC = main.c operations.c checks.c puts.c
HEAD = ft.h
HEADS = ${addprefix $(HDIR), $(HEAD)}
SRCS = ${addprefix $(SDIR), $(SRC)}
OBJS = ${SRCS:.c=.o} 
CC = cc
CFLAGS = -c -Wall -Werror -Wextra -I
NAME = do-op

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

$(OBJS): $(SDIR)%.o: $(SDIR)%.c $(HEADS)
	$(CC) $(CFLAGS) $(HDIR) -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
