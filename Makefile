# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmedyns <anmedyns@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/25 15:57:58 by anmedyns          #+#    #+#              #
#    Updated: 2024/07/25 15:58:17 by anmedyns         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC		=

OBJ		=	$(SRC:.c=.o)

CC		=	gcc -g

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror

$(NAME):	$(OBJ)
			make -C ./libft
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "\033[32mCompiled OK!\033[0m"
all:		$(NAME)

clean:
			make clean -C libft
			${RM} $(OBJ)
	@echo "\033[33mclean OK!\033[0m"
fclean: 	clean
			make fclean -C libft
			${RM} $(NAME) $(NAME_BONUS) ${OBJ}

re:			fclean all

git:
	git add .
	git commit -m "update"
	git push

.PHONY:		all clean fclean re
