# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 18:11:57 by izail             #+#    #+#              #
#    Updated: 2022/09/27 10:07:28 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f main

re: fclean all