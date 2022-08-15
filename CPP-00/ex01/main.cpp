/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:12 by izail             #+#    #+#             */
/*   Updated: 2022/08/15 11:34:58 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"


void    show_header()
{
    std::cout << "\n\t \t \t       HELLO WELCOME TO THE PHONEBOOK" << std::endl;
    std::cout << "\t \t \t ******************************************** " << std::endl;
    std::cout << "\t \t \t * - Add contacts 'Type ADD or add'         * " << std::endl;
    std::cout << "\t \t \t * - Search contacts 'Type SEARCH or search * " << std::endl;
    std::cout << "\t \t \t ******************************************** " << std::endl;
}

int main() {

    PhoneBook P1;
    std::string mac;
    int i;

    i = 0;

    
    show_header();
    while (std::cin >> mac)
    {
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