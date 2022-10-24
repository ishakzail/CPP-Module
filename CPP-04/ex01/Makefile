# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:31:59 by izail             #+#    #+#              #
#    Updated: 2022/10/24 09:53:29 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Animal.cpp Dog.cpp Cat.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f Brain

re: fclean all