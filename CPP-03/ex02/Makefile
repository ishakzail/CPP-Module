# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:36:46 by izail             #+#    #+#              #
#    Updated: 2022/10/17 17:51:52 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = frag

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp 

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f frag

re: fclean all