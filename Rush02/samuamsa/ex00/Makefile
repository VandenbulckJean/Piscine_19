# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/23 19:58:13 by jvanden-          #+#    #+#              #
#    Updated: 2020/02/23 20:06:10 by jvanden-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/dicoparsing.c srcs/dicoparsing2.c srcs/ft_dcpstr.c srcs/ft_stringop.c srcs/main.c srcs/print_elements.c srcs/save_file_in_string.c srcs/translation.c

OBJS	=	${SRCS:.c=.o}

NAME	=	rush-02

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${CFLAGS} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

.Phony:		all clean fclean
