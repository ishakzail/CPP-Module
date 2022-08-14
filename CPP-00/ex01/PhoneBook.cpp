/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/14 13:12:28 by izail            ###   ########.fr       */
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


// void    PhoneBook::addContact()
// {
//     int i;
    
//     i = 0;
//     std::string str;
//     std::cout << "Enter contact information :" << std::endl;
//     while (i < )
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
    std::cin >> _firstname;
    std::cout << "Enter last name :" << std::endl;
    std::cin >> _lastname;
    std::cout << "Enter nick name :" << std::endl;
    std::cin >> _nickname;
    std::cout << "Enter phone number :" << std::endl;
    std::cin >> _phonenumber;
    std::cout << "Enter darket secret :" << std::endl;
    std::cin >> _darketsecret;

    this->contacts[idx].setFirstName(_firstname);
    this->contacts[idx].setLastName(_lastname);
    this->contacts[idx].setNickName(_nickname);
    this->contacts[idx].setPhoneNumber(_phonenumber);
    this->contacts[idx].setDarkestSecret(_darketsecret);
    this->contacts[idx].setIndex(idx);

}

// int    PhoneBook::check_values(int idx)
// {
//     if (this->contacts[idx].getFirstName().length() > 10)
//     {
//         std::cout << "Firstname field must contain less than 10 characters" << std::endl;
//         return (0);
//     }    
// }

void    PhoneBook::addContact()
{
    if (i == 8)
        i = 0;
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