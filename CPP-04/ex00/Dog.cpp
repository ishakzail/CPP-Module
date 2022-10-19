/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:51 by izail             #+#    #+#             */
/*   Updated: 2022/10/19 05:46:54 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "dog";
    std::cout << "Dog :: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
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
    std::cout << "Dog :: getType() function called\n";
    return this->type;
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog is Barking !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog :: Default destructor called" << std::endl;
}