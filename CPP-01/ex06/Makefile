# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 11:08:47 by izail             #+#    #+#              #
#    Updated: 2022/10/01 10:53:36 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFiler

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

%.o : %.cpp 
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f harlFiler

re: fclean all