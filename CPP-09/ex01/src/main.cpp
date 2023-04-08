/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:25:43 by ishak             #+#    #+#             */
/*   Updated: 2023/04/07 21:45:53 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main (int ac, char ** av){
    try{
        if (ac != 2){
            std::cout << "Error" << std::endl;
            return (EXIT_FAILURE);
        }
        RPN RPN(av[1]);
        RPN.ft_execute();
    }
    catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
        return 0;  
}