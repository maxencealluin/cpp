NAME = replace
CC = clang++
CCFLAGS = -Wall -Werror -Wextra


SRC = src/replace.cpp

all: $(NAME)

$(NAME):
	$(CC)  $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all
