/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/17 15:24:44 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <limits>

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
    check_values(_firstname);
    std::cout << "Enter last name :" << std::endl << "->";
    std::getline(std::cin, _lastname); 
    check_values(_lastname);
    std::cout << "Enter nick name :" << std::endl << "->";
    std::getline(std::cin, _nickname) ;
    check_values(_nickname);
    std::cout << "Enter phone number :" << std::endl << "->";
    std::getline(std::cin, _phonenumber);
    check_values(_phonenumber);
    std::cout << "Enter darket secret :" << std::endl << "->";
    std::getline(std::cin, _darketsecret);
    check_values(_darketsecret);

    this->contacts[idx].setFirstName(_firstname);
    this->contacts[idx].setLastName(_lastname);
    this->contacts[idx].setNickName(_nickname);
    this->contacts[idx].setPhoneNumber(_phonenumber);
    this->contacts[idx].setDarkestSecret(_darketsecret);
    this->contacts[idx].setIndex(idx);
}

void    PhoneBook::check_values(std::string str)
{
    if (!str.length())
    {
        while (str.length() == 0)
        {
            std::cout << "Field can't be empty" << std::endl << ">";
            std::getline(std::cin, str);
        }
        return;
    }
}

int    PhoneBook::check_index()
{
    int valid;
    int index;
    valid = 1;
    
    while (valid)
    {
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cout << "Wrong index ! re-type :" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }
        else
        {
            while (index < (this->getNbrContact() - 1) || index > (this->getNbrContact() - 1))
            {
                std::cout << "index is out of range ! re-type :" << std::endl;
                std::cin >> index;
            }
            valid = 0;
        }
    }
    return index;
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



void    PhoneBook::printContact()
{
    int i , nbr;
    std::string separator = "+-------+------------+------------+------------+\n";
    std::string h1;
    std::string h2;
    std::string h3, h4;
    std::string header;
    int idx;
    
    h1 = "First name";
    h2 = "Last name ";
    h3 = "Nick name ";
    h4 = "Index";
    header = "| " + h4 + " | " + h1 + " | " + h2 + " | " + h3 + " |\n";
    std::cout << this->getNbrContact() << std::endl;
    nbr = this->getNbrContact();
    i = 0;
    if ( nbr == 0 )
    {
        std::cout << "Phone Book does not contain any contact" << std::endl;
        return ;
    }
    std::cout << separator 
            << header
            << separator;
    while (i < nbr)
    {
        
        std::cout << std::left
            << "| " << std::setw(5) << this->contacts[i].getIndex() 
            << " | " << std::setfill('.') << std::setw(10) << this->contacts[i].getFirstName() 
            << " | " << std::setfill('.') << std::setw(10) <<  this->contacts[i].getLastName()
            << " | " << std::setfill('.') << std::setw(10) << this->contacts[i].getNickName() << " |\n";
            i++;
    }
    std::cout << separator;
    std::cout << "enter index :" << std::endl;
    idx = check_index();
    this->getContact(idx);
    
}

void    PhoneBook::getContact(int idx)
{
    // check_index(idx);
    
    std::cout << "First name :" << this->contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name :" << this->contacts[idx].getLastName() << std::endl;
    std::cout << "Nick name :" << this->contacts[idx].getNickName() << std::endl;
    std::cout << "Phone number :" << this->contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Secret :" << this->contacts[idx].getDarkestSecret() << std::endl; 
}

void    PhoneBook::searchContact()
{
    this->printContact();
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