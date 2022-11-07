# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 10:04:25 by izail             #+#    #+#              #
#    Updated: 2022/11/07 12:02:04 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Serialization.cpp main.cpp

HEADER = Serialization.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f serialize

re: fclean all