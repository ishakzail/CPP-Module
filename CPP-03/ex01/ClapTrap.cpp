/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:38 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 09:25:55 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->name = "NoName";
    this->_hit = 10;
    this->_energy = 10;
    this->_damage = 0;
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
        std::cout<< "ClapTrap :: Copy assignment operator called" << std::endl;
        this->name = obj.name;
        this->_damage = obj._damage;
        this->_energy = obj._energy;
        this->_hit = obj._hit;
    }
    return (*this);
}

ClapTrap::ClapTrap(std::string name) : name(name), _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap [" << name << "] constructor called" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
    if (this->_energy > 0 || this->_hit > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << \
        " causing " <<  this->_damage << " points of damage! " << std::endl;
        this->_energy--;
    }
    else
        std::cout << "No points to attack!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 0 && this->_energy > 0)
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
		std::cout << "ClapTrap [" << this->name << "] already destroyed.:(" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit > 0 && this->_energy > 0)
    {
        this->_hit += amount;
        std::cout << "ClapTrap [" << this->name << "] is repaired [" << amount << "]" << std::endl; 
        std::cout << "ClapTrap [" << this->name << "] Hitpoints is [" << this->_hit << "]" << std::endl;
        if (this->_hit == 0)
            std::cout << "ClapTrap [" << this->name << "] is destroyed" << std::endl;
        this->_energy--;
    }
    else
        std::cout << "ClapTrap [" << this->name << "] already destroyed.. :(" << std::endl;
}

ClapTrap::ClapTrap(const std::string name, int hit, int energy, int damage)
    : name(name), _hit(hit), _energy(energy), _damage(damage)
{
     std::cout << "ClapTrap [" << name << "] Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap [" << name << "] Destructor called" << std::endl;
}