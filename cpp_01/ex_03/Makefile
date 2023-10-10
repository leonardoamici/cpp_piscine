# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamici <lamici@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 13:42:20 by lamici            #+#    #+#              #
#    Updated: 2023/09/13 14:41:40 by lamici           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
