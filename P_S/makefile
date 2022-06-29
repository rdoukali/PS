# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 22:09:05 by rdoukali          #+#    #+#              #
#    Updated: 2022/06/23 18:31:58 by rdoukali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAMEB = cheker

INCLUDE = -I ./Headers

SRCS 		=	$(shell find ./src_mnd -name "*.c")

SRCS_BONUS 	=	$(shell find ./checker -name "*.c")
# BONS		= 	$(addprefix $(BONS_DIR), $(SRCS_BONUS))
BONS 		=	$(SRCS_BONUS:.c=.o)


OBJS 		=	$(SRCS:.c=.o)

CC = gcc

#CFLAG = -Wall -Wextra -Werror

all: ${NAME}

%.o : %.c
	${CC} $(INCLUDE) ${CFLAG} -c $< -o $@

${NAME}: ${OBJS}
		${CC} $(INCLUDE) ${OBJS} -o ${NAME} 

${NAMEB}: ${BONS}
		${CC} $(INCLUDE) ${BONS} -o ${NAMEB}


bonus: ${NAMEB}

clean:
	rm -f	$(OBJS) $(BONS)

fclean: clean
	rm -f	$(NAME) $(NAMEB)

re: fclean all

.PHONY: all clean fclean re