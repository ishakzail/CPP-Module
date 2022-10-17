/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:17:03 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 14:23:14 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap [" << this->name << "] default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap [" << name << "] constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
    std::cout << "Copy constructor called" << std::endl;
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
    if(this->_hit > 0  && this->_enegry > 0)
    {
        std::cout << "Scavtrap [" << name << "] Attacks " << target << " causing " \
        << _damage << " points of damage " << std::endl;
        this->_enegry -= 5;
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