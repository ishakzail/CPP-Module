/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/15 10:49:24 by izail            ###   ########.fr       */
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


static int i = 0;

void    PhoneBook::setNbrContact(int nbr)
{
    this->nbr_contacts = nbr;
}

int PhoneBook::getNbrContact()
{
    return  this->nbr_contacts;
}

void PhoneBook::get_info(int idx)
{
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darketsecret;
    
    std::cout << "Enter first name :" << std::endl;
    std::getline(std::cin >> std::ws, _firstname);
    if ( check_values(_firstname) != 1 ) std::cout << std::endl;
    std::cout << "Enter last name :" << std::endl;
    std::getline(std::cin, _lastname); 
    if ( check_values(_lastname) != 1 ) std::cout << std::endl;
    std::cout << "Enter nick name :" << std::endl;
    std::getline(std::cin, _nickname) ;
    if ( check_values(_nickname) != 1 ) std::cout << std::endl;
    std::cout << "Enter phone number :" << std::endl;
    std::getline(std::cin, _phonenumber);
    if ( check_values(_phonenumber) != 1 ) std::cout << std::endl;
    std::cout << "Enter darket secret :" << std::endl;
    std::getline(std::cin, _darketsecret);
    if ( check_values(_darketsecret) != 1 ) std::cout << std::endl;

    this->contacts[idx].setFirstName(_firstname);
    this->contacts[idx].setLastName(_lastname);
    this->contacts[idx].setNickName(_nickname);
    this->contacts[idx].setPhoneNumber(_phonenumber);
    this->contacts[idx].setDarkestSecret(_darketsecret);
    this->contacts[idx].setIndex(idx);

}

int    PhoneBook::check_values(std::string str)
{
    if (!str.length())
    {
        while (str.length() == 0)
        {
            std::cout << "Field can't be empty" << std::endl;
            std::getline(std::cin, str);
        }
        return (0);
    }
    if (str.length() >= 10)
    {
        while (str.length() > 10)
        {
            std::cout << "Field must not containt more than 10 characters" << std::endl;
            std::getline(std::cin, str);
        }
        return (0);
    }
    return (1);
}

void    PhoneBook::addContact()
{
    // if ( this->getNbrContact() > 7)
    //     i = 0;
    this->get_info(i);
    i++;
    setNbrContact(i);
    // std::cout << "i == " << i << std::endl;
    std::cout << "nbr_contacts ==== " << getNbrContact() << std::endl;
    std::cout << "Contact created succesfully " << std::endl;
}

void    PhoneBook::printContact()
{
    int i = 0;

    // while (i < 8)
    // {
        
        std::cout << " *********** List Contact *********** " << std::endl;
        std::cout << " ------- -------- -------- -------- -------" << std::endl;
        std::cout << "| index | f.name | l.name | n.name | phone |" << std::endl;
        while (i < getNbrContact())
        {
            std::cout << " | "<<  this->contacts[i].getIndex() << " | " << "\t";
            std::cout<<   this->contacts[i].getFirstName() << " | " ;
            std::cout<<  this->contacts[i].getLastName() << " | " ;
            std::cout<<  this->contacts[i].getNickName() << " | ";
            std::cout<<  this->contacts[i].getPhoneNumber() << " | "  << "\n" ;
            i++;
        }
        std::cout << "\n -------  -------- -------- -------- ------- " << std::endl;
        
    // }
    
    // std::cout<< "" c.getFirstName() << std::endl;
}