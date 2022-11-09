# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 00:04:17 by izail             #+#    #+#              #
#    Updated: 2022/11/09 10:04:38 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =  main.cpp

HEADER = Whatever.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f template

re: fclean all