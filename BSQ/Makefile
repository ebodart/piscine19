# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorre <mmorre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 10:35:44 by mmorre            #+#    #+#              #
#    Updated: 2020/09/30 18:58:13 by mmorre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= basic_fcts/ft_atoi.c \
				basic_fcts/ft_putchar.c \
				basic_fcts/ft_putnbr.c \
				basic_fcts/ft_putstr.c \
				basic_fcts/ft_strcmp.c \
				basic_fcts/ft_strlen.c \
				basic_fcts/ft_swap.c \
				basic_fcts/ft_strlen0.c \
				basic_fcts/ft_nbrlen.c \
				ft_get_file_buffer.c \
				ft_load_file.c \
				ft_open_close_file.c \
				ft_coord.c \
				ft_map_error.c \
				ft_binary.c \
				ft_map_int.c \
				main.c 

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= BSQ

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
