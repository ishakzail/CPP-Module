# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:36:46 by izail             #+#    #+#              #
#    Updated: 2022/10/12 11:37:11 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ClapTrap.cpp main.cpp

HEADER = ClapTrap.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f clap

re: fclean all