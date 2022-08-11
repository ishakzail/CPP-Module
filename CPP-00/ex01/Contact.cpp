/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:16 by izail             #+#    #+#             */
/*   Updated: 2022/08/11 00:02:03 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
