/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:07:38 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 10:23:50 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wronganimal")
{
    std::cout << "WrongAnimal :: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal :: Copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
    if(this != &obj)
    {
        std::cout << "WrongAnimal :: Copy assignment operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

std::string WrongAnimal::getType() const 
{
    std::cout << "WrongAnimal :: getType()function called\n";
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal :: Default destructor called" << std::endl;
}