# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail < izail@student.1337.ma >            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 06:21:42 by izail             #+#    #+#              #
#    Updated: 2022/11/13 06:22:12 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easy

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =  main.cpp

HEADER = easy.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f easy

re: fclean all