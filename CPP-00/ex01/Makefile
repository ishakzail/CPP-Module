# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 02:25:57 by izail             #+#    #+#              #
#    Updated: 2022/08/18 15:21:37 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp

HEADER = PhoneBook.hpp Contact.hpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f phonebook

re: fclean all