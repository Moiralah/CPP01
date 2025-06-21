# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huidris <huidris@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 04:00:02 by huidris           #+#    #+#              #
#    Updated: 2025/06/21 04:02:24 by huidris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

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

re: fclean all

.PHONY: all clean fclean re
