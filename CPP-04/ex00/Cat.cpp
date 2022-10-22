/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:47 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 10:53:15 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "cat";
    std::cout << "Cat :: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "Cat :: Copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & obj)
{
    if(this != &obj)
    {
        std::cout << "Cat :: Copy assignment operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat is meeeeoing !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat :: Default destructor called" << std::endl;
}