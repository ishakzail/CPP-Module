# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishak <ishak@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 09:57:54 by ishak             #+#    #+#              #
#    Updated: 2023/04/08 11:45:27 by ishak            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = src/main.cpp src/PmergeMe.cpp
CC = c++
HEADER = include/PmergeMe.hpp
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