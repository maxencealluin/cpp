# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malluin <malluin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 16:48:24 by malluin           #+#    #+#              #
#    Updated: 2020/01/10 17:49:16 by malluin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = 	main.cpp \
		Fixed.cpp

OBJ = main.o \
		Fixed.o

# FLAGS = -Wall -Wextra -Werror
INCLUDE = Fixed.hpp
CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(FLAGS) -I $(INCLUDE) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE)
