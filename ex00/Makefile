NAME = megaphone
CC = clang++
CCFLAGS = -Wall -Werror -Wextra

SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all
