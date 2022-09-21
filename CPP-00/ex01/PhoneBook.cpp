/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/09/21 18:31:55 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <limits>

PhoneBook::PhoneBook()
{
   i = 1;
}
PhoneBook::~PhoneBook()
{
    std::cout << "Bye !" << std::endl;
}


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
    _firstname = check_get_str();
    std::cout << "Enter last name :" << std::endl << "->";
    _lastname = check_get_str();
    std::cout << "Enter nick name :" << std::endl << "->";
    _nickname = check_get_str();
    std::cout << "Enter phone number :" << std::endl << "->";
    _phonenumber = check_get_str();
    std::cout << "Enter darket secret :" << std::endl << "->";
    _darketsecret = check_get_str();

    
    this->contacts[idx].setFirstName(_firstname);
    this->contacts[idx].setLastName(_lastname);
    this->contacts[idx].setNickName(_nickname);
    this->contacts[idx].setPhoneNumber(_phonenumber);
    this->contacts[idx].setDarkestSecret(_darketsecret);
    this->contacts[idx]._index = idx;
}

std::string    PhoneBook::check_get_str()
{
    int stop;
    std::string str;
    
    stop = 1;
    while (std::getline(std::cin, str))
    {

            if (str.length() == 0)
                std::cout << "Field can't be empty" << std::endl << ">";
            else
                stop = 0;
    }
    return (str);
}

int    PhoneBook::check_is_int(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1); 
}

int    PhoneBook::ft_atoi(std::string  str)
{
    int     signe;
	long    nbr;
    int     i;
    
    i= 0;
	signe = 1;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * signe);
}

int    PhoneBook::check_index()
{
    int stop = 0;
    std::string index;
    
    while (!stop)
    {
        std::getline(std::cin, index);
        if((std::cin.eof() == 1))
            return (0);
        else
        {
            if (!check_is_int(index))
                std::cout << "Wrong index ! re-type :" << std::endl;
            else  if (!(ft_atoi(index)  > 0 && ft_atoi(index) <= this->getNbrContact()))
                std::cout << "index is out of range ! re-type :" << std::endl;
            else
                stop = 1;
        }
    }
    return (ft_atoi(index));
}

void    PhoneBook::addContact()
{
    if (i > 8)
        i = 0;
    this->get_info(i);
    setNbrContact(i);
    i++;
}

void    PhoneBook::printContact()
{
    int i;
    int nbr;
    int idx;
    
    std::string separator;
    std::string header;
    
    separator = "+------------+------------+------------+------------+\n";
    header = "|    Index   | First Name |  Last Name |  Nick Name |\n";
    nbr = this->getNbrContact();
    i = 1;
    if ( nbr == 0 )
    {
        std::cout << "Phone Book does not contain any contact" << std::endl;
        return ;
    }
    std::cout << separator 
            << header
            << separator;
    while (i <= nbr)
    {   
        std::cout << std::right
                  << "| " << std::setw(10) << this->contacts[i]._index
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
    if(idx)
        this->getContact(idx);
}

void    PhoneBook::_adjustString(std::string str)
{
    if (str.length() >= 10)
    {
            str = str.substr(0,9);
            str += '.';
            std::cout << std::setw(10) << str;
    }
    else
        std::cout << std::setw(10) << str;
}

void    PhoneBook::getContact(int idx)
{
    std::cout << "First name \t:" << this->contacts[idx].getFirstName() << std::endl;
    std::cout << "Last name \t:" << this->contacts[idx].getLastName() << std::endl;
    std::cout << "Nick name \t:" << this->contacts[idx].getNickName() << std::endl;
    std::cout << "Phone number \t:" << this->contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Secret \t \t:" << this->contacts[idx].getDarkestSecret() << std::endl; 
}

void    PhoneBook::searchContact()
{
    
    this->printContact();
}