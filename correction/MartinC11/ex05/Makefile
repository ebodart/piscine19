SRCS = ft_atoi.c ft_putnbr.c main.c myopfuncs.c
OBJS = ${SRCS:.c=.o}
NAME = do-op

all: ${NAME}

${NAME}: ${OBJS}
	@gcc -Wall -Wextra -Werror $^ -o $@

${OBJS}:
	@gcc -Wall -Wextra -Werror -c ${@:.o=.c} -o $@

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
