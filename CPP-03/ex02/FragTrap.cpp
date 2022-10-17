/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:26:55 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 14:35:54 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor called" << std::endl;
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