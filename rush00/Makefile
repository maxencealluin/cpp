# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malluin <malluin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/10 11:21:20 by malluin           #+#    #+#              #
#    Updated: 2020/01/23 15:41:48 by malluin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_retro
CC = clang++
CCFLAGS = -Wall -Werror -Wextra
LIBFLAGS = -lncurses

SRC_FILE = 	main.cpp  \
			TScreen.cpp \
			Player.cpp \
			AMovingEntity.cpp \
			GameController.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

SRC_PATH = src
OBJ_PATH = obj

SRC = $(addprefix $(SRC_PATH)/,$(SRC_FILE))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_FILE))
HEADER = includes

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $(LIBFLAGS) $(OBJ) -o $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp | $(OBJ_PATH)
	$(CC) $(CCFLAGS) -I $(HEADER) -o $@ -c $<

$(OBJ_PATH):
	@mkdir $(OBJ_PATH) 2> /dev/null || true

clean:
	rm -f $(OBJ) $(OBJ:.o=.d)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: lib make clean fclean re

-include $(OBJ:.o=.d)
