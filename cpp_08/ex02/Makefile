# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamici <lamici@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 11:22:01 by lamici            #+#    #+#              #
#    Updated: 2023/11/08 10:40:49 by lamici           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -Wconversion -std=c++98

NAME =  mutantStack

#-----------------------

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

#-----------------------

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#-----------------------

.PHONY: all clean fclean re