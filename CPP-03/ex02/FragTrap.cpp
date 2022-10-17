/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:26:55 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 18:08:32 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap [" << this->name << "] default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap [" << name << "] constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & obj)
{
    std::cout<< "FragTrap :: Copy assignment operator called" << std::endl;
    ClapTrap::operator=(obj);
	return *this;
}

FragTrap::FragTrap(const FragTrap & obj)
{
    std::cout << "FragTrap :: Copy constructor called" << std::endl;
    *this = obj;
    this->name = this->name+ "_copy";
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap [" << name << "] Destructor called" << std::endl;
}