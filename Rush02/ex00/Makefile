# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/26 21:39:04 by ebodart           #+#    #+#              #
#    Updated: 2020/09/27 15:01:52 by dfilipov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= basic_fcts/ft_atoi.c basic_fcts/ft_putchar.c basic_fcts/ft_putnbr.c basic_fcts/ft_putstr.c basic_fcts/ft_strcmp.c basic_fcts/ft_strlen.c basic_fcts/ft_swap.c basic_fcts/ft_split.c ft_create_dict.c ft_struct.c process_algo1.c process_algo2.c main.c 

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= rush-02

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			gcc ${CFLAGS} $^ -o $@

.c.o:
			gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
