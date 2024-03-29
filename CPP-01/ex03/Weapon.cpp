/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:28 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 16:19:28 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor" << std::endl;
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

void  Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string &Weapon::getType()
{
    return this->_type;
}
