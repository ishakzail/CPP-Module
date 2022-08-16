/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/16 16:51:09 by izail            ###   ########.fr       */
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
    
    std::cout << "Enter first name :" << std::endl << "->";
    std::getline(std::cin >> std::ws, _firstname);
    if ( check_values(_firstname) != 1 ) std::cout << "";
    std::cout << "Enter last name :" << std::endl << "->";
    std::getline(std::cin, _lastname); 
    if ( check_values(_lastname) != 1 ) std::cout << "";
    std::cout << "Enter nick name :" << std::endl << "->";
    std::getline(std::cin, _nickname) ;
    if ( check_values(_nickname) != 1 ) std::cout << "";
    std::cout << "Enter phone number :" << std::endl << "->";
    std::getline(std::cin, _phonenumber);
    if ( check_values(_phonenumber) != 1 ) std::cout << "";
    std::cout << "Enter darket secret :" << std::endl << "->";
    std::getline(std::cin, _darketsecret);
    if ( check_values(_darketsecret) != 1 ) std::cout << "";

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
            std::cout << "Field can't be empty" << std::endl << ">";
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
    // std::cout << "nbr_contacts ==== " << getNbrContact() << std::endl;
    // std::cout << "\t \t \t \t Contact created succesfully !!!" << std::endl;
}

void    PhoneBook::searchContact(int idx)
{
    std::string separator = "+-------+------------+------------+------------+\n";
    std::string h1;
    std::string h2;
    std::string h3, h4;
    std::string header;
    
    h1 = "First name";
    h2 = "Last name ";
    h3 = "Nick name ";
    h4 = "Index";
    header = "| " + h4 + " | " + h1 + " | " + h2 + " | " + h3 + " |\n";
    
    std::cout << separator 
              << header
              << separator
              << std::right 
              << "| " << std::setw(6) << this->contacts[idx].getIndex() 
              << std::setfill('.')
              << "| " << std::setw(10) << this->contacts[idx].getFirstName()
              << " | " << std::setw(10) << this->contacts[idx].getLastName()
              << " | " << std::setw(11) << this->contacts[idx].getNickName() << "|\n"
              << separator;
    // int i = 0;

    // // while (i < 8)
    // // {
        
    //     std::cout << " \t \t \t \t *********** List Contact *********** " << std::endl;
    //     std::cout << " \t \t ------------------------------------------------------" << std::endl;
    //     std::cout << " \t \t | index | first name | last name | nick name |" << std::endl;
    //     while (i < getNbrContact())
    //     {
    //         std::cout << " \t \t |"<<  this->contacts[i].getIndex() << "\t|\t";
    //         std::cout<<   this->contacts[i].getFirstName() << "\t|\t" ;
    //         std::cout<<  this->contacts[i].getLastName() << "\t|\t" ;
    //         std::cout<<  this->contacts[i].getNickName() << "\t|\t";
    //         i++;
    //     }
    //     std::cout << "\n\t \t ------------------------------------------------------" << std::endl;
        
    // }
    
    // std::cout<< "" c.getFirstName() << std::endl;
}

// std::string PhoneBook::searchContact(int idx)
// {
//     std::string separator = "+-------------+-------------+-------------+-------------+";
//     std::string h1;
//     std::string h2;
//     std::string h3;
//     std::string header;
    
//     h1 = "First name";
//     h2 = "Last name";
//     h3 = "Nick name";
//     header = "| " + h1 + " | " + h2 + " | " + h3 + " |\n";
    
//     std::cout << separator 
//               << header
//               << separator
//               << "| " << std::setw(10) << "Ishak"
//               << " | " << "Zail"
//               << " | " << "izail" << "|\n"
//               << separator;
// }