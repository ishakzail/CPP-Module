/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:51 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 11:12:32 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
    std::cout << "\033[1;34mDefaut constructor called by Dog\033[0m" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "\033[1;34mCopy constructor called by Dog\033[0m" << std::endl;
    this->brain = new Brain();
    *this = obj;
    this->type += "_copy"; 
}

Dog & Dog::operator=(const Dog & obj)
{
    if(this != &obj)
    {
        std::cout << "\033[1;34mCopy assignment operator called by Dog\033[0m" << std::endl;
        *brain = *(obj.brain);
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "\033[1;34mDog is Barking !!!\033[0m" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "\033[1;34mDestructor called by Dog\033[0m" << std::endl;
}