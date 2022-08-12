/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/12 10:17:23 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// PhoneBook::PhoneBook()
// {
//     int i;

//     i = -1;
//     this->nbr_contacts = 0;
//     this->idx_contact = 0;
//     while (++i < 8)
//         this->_Contacts[i] = new Contact;
// }
// PhoneBook::~PhoneBook()
// {
//     int i;

//     i = -1;
//     while (++i < 8)
//         delete this->_Contacts[i];     
// }

void    PhoneBook::addContact()
{
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darketsecret;
    // Contact C1;
    // i have to create an instance of phonebook Class in order to store the contacts in table inside it.
    PhoneBook P1;
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
    
    P1._Contacts[0].setFirstName(_lastname);

    std::cout << "Contact created succesfully " << std::endl;

    // std::cout << "Contact firstname :" << P1._Contacts[0]->getFirstName() << std::endl;
    // std::cout << "Contact lastname :" << C1.getLastName() << std::endl;
    // std::cout << "Contact nickname :" << C1.getNickName() << std::endl;
    // std::cout << "Contact phonenumber :" << C1.getPhoneNumber() << std::endl;
    
}

void    PhoneBook::printContact()
{
    int i = 0;
    // PhoneBook p1;
    // while (i < 8)
    // {
        std::cout << " *********** List Contact *********** " << std::endl;
        std::cout<< "First Name :" << PhoneBook::_Contacts[i].getFirstName() << std::endl;
        std::cout<< "Last Name :" <<  PhoneBook::_Contacts[i].getLastName() << std::endl;
        i++;
    // }
    
    // std::cout<< "" c.getFirstName() << std::endl;
}