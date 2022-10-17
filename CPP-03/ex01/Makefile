# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:36:46 by izail             #+#    #+#              #
#    Updated: 2022/10/17 14:23:44 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scav

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f scav

re: fclean all