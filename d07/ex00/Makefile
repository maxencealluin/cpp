# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malluin <malluin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 11:21:20 by malluin           #+#    #+#              #
#    Updated: 2020/01/22 12:05:53 by malluin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = whatever
CC = clang++
CCFLAGS = -Wall -Werror -Wextra

SRC = whatever.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CC) -c $(CCFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
