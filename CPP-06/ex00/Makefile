# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 10:07:16 by izail             #+#    #+#              #
#    Updated: 2022/11/02 18:08:33 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Conversion.cpp main.cpp

HEADER = Conversion.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f convert

re: fclean all