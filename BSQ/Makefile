NAME	= bsq

SRC		= check.c find.c free_memory.c ft_base.c parse.c main.c

OBJS	= ${SRC:.c=.o}

GCC		= gcc -Wall -Wextra -Werror

.c.o:		
			${GCC} -c $< ${.<:.c=.o}

all:		${OBJS}
			${GCC} -o ${NAME} ${SRC}

${NAME}:	all

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean ${NAME}