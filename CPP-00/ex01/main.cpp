/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:12 by izail             #+#    #+#             */
/*   Updated: 2022/08/14 11:40:50 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main() {

    PhoneBook P1;
    std::string mac;
    int i;

    i = 0;

    std::cout << "HELLO WELCOME TO THE PHONEBOOK" << std::endl;
    std::cout << "****************************************************************" << std::endl;
    std::cout << "You can choose between adding or searching by taping ADD or SEARCH in the stdin" << std::endl;
    std::cout << "****************************************************************" << std::endl;

    while (std::cin >> mac)
    {
        // std::cout << "input value == " << mac << std::endl;
        if (mac.compare("EXIT") == 0 )
            exit(0);
        else if (mac.compare("ADD") != 0 && mac.compare("SEARCH") != 0)
            std::cout << "You can only search or add a contact"<< std::endl;
        else
        {
            std::cout << "Great you can add a contact to the list !" << std::endl;
            P1.addContact();
            // P1.setNbr(4);
            P1.printContact();
        }
        
         // std::cout << "value == " << mac << std::endl;
    }
    return 0;
}