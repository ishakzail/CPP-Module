/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:12 by izail             #+#    #+#             */
/*   Updated: 2022/09/30 17:47:11 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "\n\t \t \t     HELLO WELCOME TO THE PHONEBOOK" << std::endl;
    std::cout << "\t \t \t ******************************************** " << std::endl;
    std::cout << "\t \t \t * - ADD                                    * " << std::endl;
    std::cout << "\t \t \t * - SEARCH                                 * " << std::endl;
    std::cout << "\t \t \t * - EXIT                                   * " << std::endl;
    std::cout << "\t \t \t ******************************************** " << std::endl;
}

int main() {

    PhoneBook P1;
    std::string cmd;
    int val;

    show_header();
    while (std::getline(std::cin, cmd))
    {
        val = check_cmd(cmd);
        if (val == 3)
            return (0);
        else if (val == 2)
            P1.searchContact();
        else if (val == 1)
            P1.addContact();
    }
    return 0;
}