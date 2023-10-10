# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamici <lamici@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 10:05:44 by lamici            #+#    #+#              #
#    Updated: 2023/09/20 10:55:32 by lamici           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Fixed.cpp \

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
