# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamici <lamici@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 15:17:24 by lamici            #+#    #+#              #
#    Updated: 2023/10/04 11:05:20 by lamici           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	main.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Brain.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all