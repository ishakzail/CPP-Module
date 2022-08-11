/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:12 by izail             #+#    #+#             */
/*   Updated: 2022/08/11 00:06:43 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

int main()
{
    std::string line;
    
    while (std::getline(std::cin, line)) {
        std::cout << line << std::endl;
    }   
    return 0;
}