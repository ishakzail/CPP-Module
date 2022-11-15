# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 13:04:07 by izail             #+#    #+#              #
#    Updated: 2022/11/15 14:35:05 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutan

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =  main.cpp

HEADER = MutantStack.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f mutan

re: fclean all