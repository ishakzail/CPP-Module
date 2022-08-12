/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/12 05:01:58 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// PhoneBook::PhoneBook()
// {
//     std::cout << "Contructor called in Phone Book" << std::endl;
// }

// PhoneBook::~PhoneBook()
// {
//     std::cout << "Destructor called in Phone Book" << std::endl;
// }

void    PhoneBook::addContact()
{
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darketsecret;
    Contact C1;
    // i have to create an instance of phonebook (contact ) in order to store the contacts in table 
    std::cout << "Enter first name :" << std::endl;
    std::cin >> _firstname;
    std::cout << "Enter last name :" << std::endl;
    std::cin >> _lastname;
    std::cout << "Enter nick name :" << std::endl;
    std::cin >> _nickname;
    std::cout << "Enter phone number :" << std::endl;
    std::cin >> _phonenumber;
    std::cout << "Enter darket secret :" << std::endl;
    std::cin >> _darketsecret;
    
    C1.setFirstName(_firstname);
    C1.setLastName(_lastname);
    C1.setNickName(_nickname);
    C1.setPhoneNumber(_phonenumber);
    C1.setDarkestSecret(_darketsecret);

    std::cout << "Contact created succesfully " << std::endl;

    // std::cout << "Contact firstname :" << C1.getFirstName() << std::endl;
    // std::cout << "Contact lastname :" << C1.getLastName() << std::endl;
    // std::cout << "Contact nickname :" << C1.getNickName() << std::endl;
    // std::cout << "Contact phonenumber :" << C1.getPhoneNumber() << std::endl;
    
}

void    PhoneBook::printContact(Contact c)
{
    std::cout << "List Contact" << std::endl;
    std::cout<< c.getFirstName() << std::endl;
    std::cout<< c.getFirstName() << std::endl;
}