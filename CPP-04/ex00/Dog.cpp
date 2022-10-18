/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:51 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 18:01:30 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog :: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog :: Copy constructor called" << std::endl;
    *this = obj;
}

Dog & Dog::operator=(const Dog & obj)
{
    if(this != &obj)
    {
        std::cout << "Animal :: Copy assignment operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

std::string Dog::getType()
{
    return this->type;
}

void Dog::setType(std::string _type)
{
    this->type = _type;
}

void    Dog::makeSound(void)
{
    std::cout << "hao hao !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog :: Default destructor called" << std::endl;
}