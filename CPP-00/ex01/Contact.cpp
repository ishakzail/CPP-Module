/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:16 by izail             #+#    #+#             */
/*   Updated: 2022/08/14 13:13:25 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact::Contact(void)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         this->infos[i] = std::string();
//     }   
// }

void Contact::setFirstName(std::string firstname)
{

    this->firstName = firstname;
}

void Contact::setLastName(std::string lastname)
{
    if (lastname.length() <= 10)
        this->lastName = lastname;
    else
    {
        std::cout << "Firstname field must contain less than 10 characters" << std::endl;
        return;
    }
        
}

void Contact::setNickName(std::string nickname)
{
    this->nickName = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber)
{
    this->phoneNumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret)
{
    this->darkestSecret = darkestsecret;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}

std::string Contact::getLastName()
{
    return this->lastName;
}

std::string Contact::getNickName()
{
    return this->nickName;
}

std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return this->darkestSecret;
}

void Contact::setIndex(int nbr)
{
    this->index = nbr;
}

int Contact::getIndex()
{
    return this->index;
}
