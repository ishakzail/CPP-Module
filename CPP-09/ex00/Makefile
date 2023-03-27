# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <izail@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 13:30:46 by izail             #+#    #+#              #
#    Updated: 2023/03/27 17:23:13 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = src/main.cpp src/BitcoinExchange.cpp
CC = c++
HEADER = include/BitcoinExchange.hpp
RM = rm -rf


%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}  

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re : fclean all