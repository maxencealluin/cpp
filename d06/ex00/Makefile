# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malluin <malluin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 11:21:20 by malluin           #+#    #+#              #
#    Updated: 2020/01/20 17:40:37 by malluin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = convertor
CC = clang++
CCFLAGS = -Wall -Werror -Wextra

SRC = main.cpp Conversion.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
