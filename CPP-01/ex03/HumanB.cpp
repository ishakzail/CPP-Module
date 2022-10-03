/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:38 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 14:26:20 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::~HumanB() 
{
    std::cout << "HumanB destructor" << std::endl;    
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;   
}

void HumanB::attack()
{
    if (this->weaponB)
        std::cout << this->name <<  " attacks with their " << weaponB->getType() << std::endl;
}