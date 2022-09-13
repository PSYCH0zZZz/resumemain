LIBP = includes/

LIBPS = ${LIBP}ft.h

SRCS = $ ${wildcard srcs/*.c}

OBJS = ${SRCS:.c=.o}

NAME = do-op

GCC  = gcc -Wall -Wextra -Werror

AR = ar

ARFLAG = -crs

RM = rm -f

.c.o:
			@${GCC} -c $< -o ${<:.c=.o} -I${LIBPS}


all:		${OBJS}
			@${GCC} -o ${NAME} ${OBJS}

${NAME}:	all

clean: 
			@${RM} ${OBJS}

fclean: 	clean
			@${RM} $(OBJS)

re: 		@fclean all

.PHONY: all clean fclean re

