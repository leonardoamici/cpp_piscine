CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -Wconversion -std=c++98

NAME = serializer

#-----------------------

SRC =	main.cpp \
		Serializer.cpp

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
