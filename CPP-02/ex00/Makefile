# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 08:40:03 by izail             #+#    #+#              #
#    Updated: 2022/10/06 08:41:07 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Fixed.cpp main.cpp

HEADER = Fixed.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f fixed

re: fclean all