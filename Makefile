# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/25 15:57:58 by anmedyns          #+#    #+#              #
#    Updated: 2024/09/06 16:22:58 by anmedyns         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC		= move0.c move1.c split.c algoritm.c main.c utils.c move2.c utils2.c

OBJ		=	$(SRC:.c=.o)

CC		=	gcc -g

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror # -fsanitize=address -fsanitize=undefined

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[32mCompiled OK!\033[0m"
all:		$(NAME)

clean:
			${RM} $(OBJ)
	@echo "\033[33mclean OK!\033[0m"
fclean: 	clean
			${RM} $(NAME) $(NAME_BONUS) ${OBJ}

re:			fclean all

git:
	git add .
	git commit -m "update"
	git push

.PHONY:		all clean fclean re
