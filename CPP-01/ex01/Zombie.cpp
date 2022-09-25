/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:15 by izail             #+#    #+#             */
/*   Updated: 2022/09/25 11:08:54 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie()
{
    std::cout<< "Zombie destructed" << std::endl;
}

Zombie::Zombie(string n)
{
    this->name = n;
}

void    Zombie::setName(string name)
{
    this->name = name;
}

string  Zombie::getName()
{
    return (this->name);
}

void    Zombie::announce()
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}