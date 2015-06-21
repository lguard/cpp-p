NAME = 2049
CC = clang++
RM = rm -f
HEADER = -I ./
CFLAGS = -Wall -Werror -Wextra
SRCS = 	Enemy.cpp \
		Entity.cpp \
		Game.cpp \
		Missile.cpp \
		Player.cpp

HPP = 	Enemy.hpp \
		Entity.hpp \
		Game.hpp \
		Missile.hpp \
		Player.hpp \
		Defines.hpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) main.cpp
	$(CC) -Ofast main.cpp -o $(NAME) $(OBJ) -lncurses

%.o: %.cpp
	$(CC) -Ofast -o $@ -c $< $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

TOGIT =	$(SRCS) \
		$(HPP) \
		Makefile \
		main.cpp


git:
	git add $(TOGIT)
	git commit -m 'auto commit'
	git push

.PHONY: re fclean clean all
