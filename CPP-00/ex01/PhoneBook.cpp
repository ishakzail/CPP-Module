/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:06 by izail             #+#    #+#             */
/*   Updated: 2022/09/30 15:56:15 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
   i = 0;
   nbr_contacts = 0;
}
PhoneBook::~PhoneBook()
{
    std::cout << "Bye !" << std::endl;
}

void    PhoneBook::set_info(std::string f, std::string l, std::string n, std::string p, std::string d, int idx)
{
    
    this->contacts[idx].setFirstName(f);
    this->contacts[idx].setLastName(l);
    this->contacts[idx].setNickName(n);
    this->contacts[idx].setPhoneNumber(p);
    this->contacts[idx].setDarkestSecret(d);
    this->contacts[idx]._index = idx + 1;
}

void PhoneBook::get_info(int idx)
{
    string str[5];
    
    str[0] = check_get_str("first name");
    if(str[0] == "")
        return;
    str[1] = check_get_str("last name");
    if(str[1] == "")
        return;
    str[2] = check_get_str("nick name");
    if(str[2] == "")
        return;
    str[3] = check_get_str("phone number");
    if(str[3] == "")
        return;
    str[4] = check_get_str("darker secret");
    if(str[4] == "")
        return;
    
    this->set_info(str[0], str[1], str[2], str[3], str[4], idx);
}

std::string    PhoneBook::check_get_str(std::string str)
{
    int stop;
    std::string inp;
    
    stop = 1;
    std::cout << "Enter " << str << std::endl << "->";
    while (stop)
    {
        if(!(getline(std::cin, inp)))
                return "";
        if (inp.empty() == 1)
            std::cout << "Field can't be empty" << std::endl << ">";
        else
            stop = 0;
    }
    return (inp);
}

int    check_is_int(std::string str)
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

int    ft_atoi(std::string  str)
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
            else  if (!((ft_atoi(index))  > 0 && (ft_atoi(index)) <= this->nbr_contacts))
                std::cout << "index is out of range ! re-type :" << std::endl;
            else
                stop = 1;
        }
    }
    return (ft_atoi(index));
}

void    PhoneBook::addContact()
{
    i = i % 8;
    this->get_info(i);
    this->nbr_contacts = (this->nbr_contacts == 8 ? 8 : this->nbr_contacts + 1);
    i++;
}

void    PhoneBook::printContact()
{
    int i;
    int nbr;
    std::string separator;
    std::string header;
    
    separator = "+------------+------------+------------+------------+\n";
    header = "|    Index   | First Name |  Last Name |  Nick Name |\n";
    nbr = this->nbr_contacts;
    i = 0;
    std::cout << separator 
            << header
            << separator;
    while (i < nbr)
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
}

void    _adjustString(std::string str)
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
    int idx;
    int nbr;

    nbr = this->nbr_contacts;
    if ( nbr == 0 )
    {
        std::cout << "Phone Book does not contain any contact" << std::endl;
        return ;
    }
    this->printContact();
    std::cout << "enter index :" << std::endl;
    idx = check_index();
    if(idx > 0)
        this->getContact(idx - 1);
}