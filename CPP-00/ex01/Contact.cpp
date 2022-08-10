/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:16 by izail             #+#    #+#             */
/*   Updated: 2022/08/10 02:10:07 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

using namespace std;

void Contact::setFirstName(string firstname)
{
    this->firstName = firstName;
}

void Contact::setLastName(string lastname)
{
    this->lastName = lastname;
}

void Contact::setNickName(string nickname)
{
    this->nickName = nickname;
}

void Contact::setPhoneNumber(string phonenumber)
{
    this->phoneNumber = phonenumber;
}

void Contact::setDarkestSecret(string darkestsecret)
{
    this->darkestSecret =darkestsecret;
}

string Contact::getFirstName()
{
    return this->firstName;
}

string Contact::getLastName()
{
    return this->lastName;
}

string Contact::getNickName()
{
    return this->nickName;
}

string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

string Contact::getDarkestSecret()
{
    return this->darkestSecret;
}
