# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 19:12:19 by jvanden-          #+#    #+#              #
#    Updated: 2020/02/20 10:24:03 by jvanden-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/atoi.c srcs/print.c srcs/main.c srcs/operations.c

OBJS	=	${SRCS:.c=.o}

HEADERS	=	includes

NAME	=	do-op

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -I${HEADERS}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${CFLAGS} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

.Phony:		all clean fclean re
