/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:43 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 16:30:38 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) 
    : name(name) , weapon(weapon) 
{
}

void HumanA::attack()
{
    std::cout << this->name <<  " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor" << std::endl;
}