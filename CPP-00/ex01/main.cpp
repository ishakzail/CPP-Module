/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:12 by izail             #+#    #+#             */
/*   Updated: 2022/08/16 11:14:20 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int     check_cmd(std::string cmd)
{
    if (cmd == "ADD")
        return (1);
    else if (cmd == "SEARCH")
        return (2);
    else if (cmd == "EXIT")
        return (3);
    return (0);
           
}

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
    std::string cmd;
    int idx;
    int val;
    int stop;

    stop = 0;
    
    show_header();
    
    while (!stop)
    {
        std::cout << "$>";
        std::getline(std::cin, cmd);
        val = check_cmd(cmd);
        
        if (val == 3)
        {
            std::cout << "Bye!" << std::endl;
            stop = 1;
        }
        else if (val == 2)
        {
            std::cout << "type index of contact :" ;
            std::cin >> idx;
            P1.searchContact(idx);
        }
        else if (val == 1)
            P1.addContact();
        else 
            std::cout << "Invalid command ! " << std::endl;
    }
    return 0;
}