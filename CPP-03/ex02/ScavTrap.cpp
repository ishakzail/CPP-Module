/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:17:03 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 18:00:29 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap [" << this->name << "] default constructor called" << std::endl;
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap [" << name << "] constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
    std::cout << "ScapTrap :: Copy constructor called" << std::endl;
    *this = obj;
    this->name = this->name+ "_copy";
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj)
{
    std::cout<< "ScavTrap :: Copy assignment operator called" << std::endl;
    ClapTrap::operator=(obj);
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if(this->_hit > 0  && this->_energy > 0)
    {
        std::cout << "Scavtrap [" << name << "] attacks " << target << " causing " \
        << _damage << " points of damage " << std::endl;
        this->_energy -= 5;
    }
    else
        std::cout << "ScavTrap [" << name << "] can't attack [" << target << "]" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap [" << name << "] destructor called" << std::endl;
}