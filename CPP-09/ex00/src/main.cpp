/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:30:42 by izail             #+#    #+#             */
/*   Updated: 2023/03/27 17:28:22 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try{
        if (ac != 2)
        {
            std::cerr << "Not enough parametrs" << std::endl;
            return (0);
        }
        BitcoinExchange btc(av[1]);
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}