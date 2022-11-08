# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 19:42:36 by izail             #+#    #+#              #
#    Updated: 2022/11/07 19:55:38 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =  main.cpp

HEADER = Base.hpp A.hpp C.hpp B.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f identify

re: fclean all