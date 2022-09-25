# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 09:57:12 by izail             #+#    #+#              #
#    Updated: 2022/09/25 11:41:25 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Zombie.cpp zombieHorde.cpp main.cpp

HEADER = Zombie.hpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f zombieHorde

re: fclean all