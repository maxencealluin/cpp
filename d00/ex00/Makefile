# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malluin <malluin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 11:21:20 by malluin           #+#    #+#              #
#    Updated: 2020/01/20 17:35:32 by malluin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = megaphone
CC = clang++
CCFLAGS = -Wall -Werror -Wextra

SRC = megaphone.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

fclean:
	rm -rf $(NAME)

re: fclean all
