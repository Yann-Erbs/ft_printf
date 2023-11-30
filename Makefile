# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yerbs <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 12:04:26 by yerbs             #+#    #+#              #
#    Updated: 2023/11/24 13:13:28 by yerbs            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	libft/ft_bzero.c \
		libft/ft_calloc.c \
		libft/ft_memset.c \
		libft/ft_strdup.c \
		libft/ft_strlen.c \
		libft/ft_itoa.c \
		srcs/ft_printf.c \
		srcs/ft_printchar.c \
		srcs/ft_printnbr.c \
		srcs/ft_printpointer.c \
		srcs/ft_printhex.c \
		srcs/ft_printpercent.c \
		srcs/ft_printunsignednbr.c \
		srcs/ft_uitoa.c \

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
