/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:42 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 11:19:19 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "\033[1;33mDefault constructor called by Animal\033[0m" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
    this->type += "_copy";
    std::cout << "\033[1;33mCopy constructor called by Animal\033[0m" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "\033[1;33mParam constructor called by Animal\033[0m" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
    if(this != &obj)
    {
        std::cout << "\033[1;33mCopy assignment operator called by Animal\033[0m" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

std::string Animal::getType() const 
{
    std::cout << "\033[1;33mgetType() function called by Animal\033[0m" << std::endl;
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "\033[1;33mAnimal sound\033[0m" << std::endl;
}

Animal::~Animal()
{
    std::cout << "\033[1;33mDestructor called by Animal\033[0m" << std::endl;
}