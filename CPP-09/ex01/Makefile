# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishak <ishak@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 22:26:54 by ishak             #+#    #+#              #
#    Updated: 2023/04/07 11:41:03 by ishak            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = src/main.cpp src/RPN.cpp
CC = c++
HEADER = include/RPN.hpp
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