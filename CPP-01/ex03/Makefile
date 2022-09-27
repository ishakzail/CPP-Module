# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 10:58:00 by izail             #+#    #+#              #
#    Updated: 2022/09/27 10:05:52 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f main

re: fclean all