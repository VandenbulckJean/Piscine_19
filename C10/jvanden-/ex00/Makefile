# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 10:41:55 by jvanden-          #+#    #+#              #
#    Updated: 2020/02/21 10:55:53 by jvanden-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c

OBJS	=	${SRCS:.c=.o}

NAME	=	ft_display_file

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${CFLAGS} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		${CLEAN}
			${RM} ${NAME}
