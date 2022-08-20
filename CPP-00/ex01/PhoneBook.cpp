/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/08/18 17:09:40 by izail            ###   ########.fr       */
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
            while ( !(index >= 0 && index < this->getNbrContact()) )
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
    int j;

    j = 1;
    if (i == 8)
    {
        while (j < i)
        {
            this->contacts[j - 1] = this->contacts[j];
            j++;
        }
        i--;
        this->contacts[i].setIndex(j++);
    }
    this->get_info(i);
    i++;
    setNbrContact(i);
}

void    PhoneBook::printContact()
{
    int i , nbr;
    std::string separator = "+-------+------------+------------+------------+\n";
    std::string header;
    int idx;
    
    header = "| Index | First Name | Last Name  | Nick Name  |\n";
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
                  << " | ";
        _adjustString(this->contacts[i].getFirstName());
        std::cout <<  " | ";
        _adjustString(this->contacts[i].getLastName());
        std::cout << " | ";
        _adjustString(this->contacts[i].getNickName());
        std::cout << " |\n" ;
            i++;
    }
    std::cout << separator;
    std::cout << "enter index :" << std::endl;
    idx = check_index();
    this->getContact(idx);
    
}

void    PhoneBook::_adjustString(std::string str)
{
    if (str.length() >= 10)
    {
       std::cout <<std::setw(10) << std::setfill('.') << str.substr(0,10);
       
    }
    else
    {
        std::cout << std::setw(10) << str;
    }

}

void    PhoneBook::getContact(int idx)
{
    std::cout << "First name :" << this->contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name :" << this->contacts[idx].getLastName() << std::endl;
    std::cout << "Nick name :" << this->contacts[idx].getNickName() << std::endl;
    std::cout << "Phone number :" << this->contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Secret :" << this->contacts[idx].getDarkestSecret() << std::endl; 
}

void    PhoneBook::searchContact()
{
    this->printContact();
}