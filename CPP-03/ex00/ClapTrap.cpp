/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:38 by izail             #+#    #+#             */
/*   Updated: 2022/10/14 08:48:47 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :  _hit(10), _enegry(10), _damage(0)
{
    std::cout << "Default constructor Called !" << std::endl;
    this->name = "NoName";
}


ClapTrap::ClapTrap(const ClapTrap & obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & obj)
{
    if (this != &obj)
    {
        std::cout<< "Copy assignment operator called" << std::endl;
        this->name = obj.name;
        this->_damage = obj._damage;
        this->_enegry = obj._enegry;
        this->_hit = obj._hit;
    }
    return (*this);
}

ClapTrap::ClapTrap(std::string name) : name(name), _hit(10), _enegry(10), _damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
    if (this->_enegry > 0 || this->_hit > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << \
        " causing " <<  this->_damage << " points of damage! " << std::endl;
        this->_enegry--;
    }
    else
        std::cout << "No points to attack!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap [" << this->name << "] Currently, Hitpoints is [" << this->_hit << "]" << std::endl;

	if (this->_hit > 0 && this->_enegry > 0)
	{
		this->_hit -= amount;
		if (this->_hit < 0)
			this->_hit = 0;
		std::cout << "ClapTrap [" << this->name << "] take Damages [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->name << "] Hitpoints is [" << this->_hit << "]" << std::endl;
		if (this->_hit == 0)
			std::cout << "ClapTrap [" << this->name << "] is destroyed" << std::endl;
	}
	else
		std::cout << "ClapTrap [" << this->name << "] destroyed already.. :(" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit > 0 && this->_enegry > 0)
    {
        this->_hit += amount;
        std::cout << "ClapTrap [" << this->name << "] is repaired [" << amount << "]" << std::endl; 
        std::cout << "ClapTrap [" << this->name << "] Hitpoints is [" << this->_hit << "]" << std::endl;
        if (this->_hit == 0)
            std::cout << "ClapTrap [" << this->name << "] is destroyed" << std::endl;
        this->_enegry--;
    }
    else
        std::cout << "ClapTrap [" << this->name << "] already destroyed.. :(" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Died !" << std::endl;
}