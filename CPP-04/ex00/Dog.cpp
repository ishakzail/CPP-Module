/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:51 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 10:52:59 by izail            ###   ########.fr       */
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
}

Dog & Dog::operator=(const Dog & obj)
{
    if(this != &obj)
    {
        std::cout << "Dog :: Copy assignment operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}


void    Dog::makeSound(void) const
{
    std::cout << "Dog is Barking !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog :: Default destructor called" << std::endl;
}