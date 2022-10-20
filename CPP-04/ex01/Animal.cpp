/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:42 by izail             #+#    #+#             */
/*   Updated: 2022/10/19 05:16:04 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "Animal :: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal :: Copy constructor called" << std::endl;
    *this = obj;
}

Animal & Animal::operator=(const Animal &obj)
{
    if(this != &obj)
    {
        std::cout << "Animal :: Copy assignment operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

std::string Animal::getType() const 
{
    std::cout << "Animal :: getType() function called\n";
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "animal sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal :: Default destructor called" << std::endl;
}