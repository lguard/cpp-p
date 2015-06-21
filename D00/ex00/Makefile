NAME = megaphone
CC = clang++
RM = rm -f
HEADER = -I ./header/
CFLAGS = -Wall -Werror -Wextra $(HEADER)
SRC = 	megaphone.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -Ofast $(CFLAGS)  -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) -Ofast -o $@ -c $< $(CFLAGS) $(HEADER)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
