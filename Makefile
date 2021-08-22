# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 01:16:11 by jodufour          #+#    #+#              #
#    Updated: 2021/08/22 04:22:16 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CC		=	cc -c -o
LINK	=	cc -o
MKDIR	=	mkdir -p
RM		=	rm -rf

#######################################
#             EXECUTABLES             #
#######################################
NAME	=	rush-02

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR	=	srcs/
OBJ_DIR	=	objs/
INC_DIR	=	includes/
PRV_DIR	=	private/

######################################
#            SOURCE FILES            #
######################################
SRC		=	\
			${addprefix parsing/,	\
				r2_parse_dict.c		\
			}						\
			${addprefix utils/,		\
				r2_a_to_llu.c		\
				r2_is_digit.c		\
				r2_is_space.c		\
				r2_llu_len.c		\
				r2_llu_to_a.c		\
				r2_str_is_equ.c		\
				r2_str_trim.c		\
			}						\
			main.c					\
			r2_check_format.c		\
			r2_check_nb.c			\
			r2_err_msg.c			\
			r2_run.c

######################################
#            OBJECT FILES            #
######################################
OBJ		=	${SRC:.c=.o}
OBJ		:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP		=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS	=	-Wall -Wextra #-Werror
CFLAGS	+=	-MMD -MP
CFLAGS	+=	-I${INC_DIR}
CFLAGS	+=	-I${PRV_DIR}

ifeq (${DEBUG}, true)
	CFLAGS	+=	-g
endif

LDFLAGS	=	

#######################################
#                RULES                #
#######################################
${NAME}:	${OBJ}
	${LINK} $@ $^ ${LDFLAGS}

all:	${NAME}

-include ${DEP}

${OBJ_DIR}%.o:	${SRC_DIR}%.c
	${MKDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJ_DIR}

fclean:
	${RM} ${OBJ_DIR} ${NAME}

re:	fclean all

norm:
	@norminette ${SRC_DIR} ${INC_DIR} ${PRV_DIR} | grep 'Error' ; true

coffee:
	@echo '                                              '
	@echo '                   "   "                      '
	@echo '                  " " " "                     '
	@echo '                 " " " "                      '
	@echo '         _.-==="-"""""-"===-._                '
	@echo '        |=___   "~"~"~"   ___=|=,.            '
	@echo '        |    """======="""    |  \\           '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |  //           '
	@echo '         \                   /=="`            '
	@echo '          \                 /                 '
	@echo '           `"--._______.--"`                  '
	@echo '                                              '

.PHONY:	all clean fclean re norm coffee
