# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamici <lamici@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 11:51:27 by lamici            #+#    #+#              #
#    Updated: 2023/09/14 14:50:36 by lamici           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Harl.cpp

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all