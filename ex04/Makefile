# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 04:00:02 by huidris           #+#    #+#              #
#    Updated: 2025/06/30 03:02:06 by huidris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= sed

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC		= c++

SRC		= $(wildcard *.cpp)

$(NAME):
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	clear

fclean: clean
	rm -rf $(NAME)
	rm -r *.replace

re: fclean all

.PHONY: all clean fclean re
