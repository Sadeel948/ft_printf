# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/28 13:06:53 by syaseen           #+#    #+#              #
#    Updated: 2026/10/02 14:19:50 by syaseen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf_char.c ft_printf_hex.c ft_printf_ptr.c ft_printf_un.c \
       ft_printf_nbr.c ft_printf_str.c ft_printf_hex_up.c ft_printf.c


OBJS = ${SRCS:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: ${NAME}

$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
