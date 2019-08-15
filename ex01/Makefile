NAME = phonebook
CC = clang++
CCFLAGS = -Wall -Werror -Wextra

SRC =	contact.cpp \
		main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all
