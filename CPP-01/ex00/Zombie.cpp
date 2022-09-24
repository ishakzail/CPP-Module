/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:17:22 by izail             #+#    #+#             */
/*   Updated: 2022/09/24 11:41:14 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(string name)
{
    this->name = name;
}

string Zombie::getName()
{
    return this->name;
}

Zombie::Zombie(string name)
{
    std::cout << "Zombie created Successfully!" << std::endl;
    this->name = name;
}

void Zombie::announce()
{
    std::cout << this->getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*  newZombie(string name)
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void    Zombie::randomChump(string name)
{
    Zombie *zombie = new Zombie(name);
    zombie->announce();
}