# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 14:36:02 by jvigny            #+#    #+#              #
#    Updated: 2023/01/19 11:08:41 by jvigny           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = instructions.c instructions_2.c \
	list.c find_mediane.c is_sort.c algorithme.c \
	list_opti.c list_opti_2.c opti.c sort_3_elements.c push_swap.c \
	ft_strcpy.c sort_only_3_elements.c \
	merge.c add_merge.c algo.c div_elements.c \
	exception.c join_elements.c rev_rotate.c t_position.c \
	t_res_opti.c ft_split.c ft_strlen.c free_split.c verif_duplicat.c \
	ft_atoi.c ft_cmp.c ft_putnbr.c fill_pile.c sort_a.c


SRC_BONUS = checker.c get_next_line.c get_next_line_utils.c \
	fill_pile.c ft_split.c ft_atoi.c ft_cmp.c verif_duplicat.c free_split.c \
	list.c list_opti.c list_opti_2.c ft_strlen.c ft_strcpy.c ft_putnbr.c \
	instructions_checker.c instructions_checker_2.c action_checker.c \
	fill_list_opti.c verif_checker.c
	
OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${SRC_BONUS:.c=.o}

NAME= push_swap
NAME_BONUS = checker
CC = cc
CFLAGS_BONUS = -Wall -Werror -Wextra -I. -g
CFLAGS = -Wall -Werror -Wextra -I. -g

all:	${NAME}

${NAME}:	${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

bonus:	${OBJ_BONUS}
	${CC} ${CFLAGS_BONUS} -o ${NAME_BONUS} ${OBJ_BONUS}

clean:
	rm -f ${OBJ} ${OBJ_BONUS}

fclean:	clean
	rm -f ${NAME} ${NAME_BONUS}

re:	fclean all

.PHONY: re all fclean clean