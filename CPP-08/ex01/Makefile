# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:59:58 by izail             #+#    #+#              #
#    Updated: 2022/11/14 17:12:10 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =  main.cpp Span.cpp

HEADER = Span.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f span

re: fclean all