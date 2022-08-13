/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:16 by izail             #+#    #+#             */
/*   Updated: 2022/08/13 16:27:47 by izail            ###   ########.fr       */
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
    this->lastName = lastname;
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
    this->darkestSecret =darkestsecret;
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

// void Contact::setInformations(int idx)
// {
//     this->index = idx;
//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << "Enter || " << Contact::infos[i] << std::endl;
//         std::getline(std::cin, this->infos[i]);
//     }
// }