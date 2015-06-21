NAME = Template
CC = clang++
RM = rm -f
HEADER = -I ./
CFLAGS = -Wall -Werror -Wextra -Wconversion
SRC = 	main.cpp iter.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(HEADER) -Ofast -o $(NAME) $(OBJ) -I ./headers/

%.o: %.cpp
	$(CC) -Ofast -o $@ -c $< $(CFLAGS) -I ./headers/

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
