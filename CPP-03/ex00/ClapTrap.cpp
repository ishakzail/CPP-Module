/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:38 by izail             #+#    #+#             */
/*   Updated: 2022/10/12 14:43:25 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor Called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
}

void ClapTrap::attack(const std::string & target)
{
    
}

ClapTrap::~ClapTrap()
{
    std::cout << " Destructor Called !" << std::endl;
}