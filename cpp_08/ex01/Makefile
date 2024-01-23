# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamici <lamici@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 11:07:10 by lamici            #+#    #+#              #
#    Updated: 2023/11/07 10:49:45 by lamici           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -Wconversion -std=c++98

NAME = span

#-----------------------

SRC =	main.cpp \
		Span.cpp

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
