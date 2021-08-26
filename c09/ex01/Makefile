# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chsimon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 10:36:32 by chsimon           #+#    #+#              #
#    Updated: 2021/08/25 14:54:39 by chsimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc

CFLAGS 	= -Wall -Werror -Wextra

SRCS 	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCLUDE = ./includes

NAME 	= libft.a

OBJS 	= $(SRCS:.c=.o)

${NAME} : ${OBJS}
			ar -rcs ${NAME} ${OBJS}

.c.o	: 	${SRCS}
			${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDE}

all 	: 	${NAME}

clean 	:	
			rm -f ${OBJS}

fclean 	: 	clean
			rm -f ${NAME}

re 		: 	fclean all

.PHONY: all clean flcean re
