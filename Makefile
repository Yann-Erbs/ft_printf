# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 12:04:26 by yerbs             #+#    #+#              #
#    Updated: 2023/11/21 12:27:48 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	srcs/ft_printf.c \
	srcs/ft_putchar.c \
	srcs/ft_putstr.c \

OBJS = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
