# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malluin <malluin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 11:21:07 by malluin           #+#    #+#              #
#    Updated: 2020/01/10 11:21:08 by malluin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
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
