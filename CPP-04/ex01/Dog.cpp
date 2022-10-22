/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:51 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 23:48:31 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
    std::cout << "\033[1;34mDefaut constructor called by Dog\033[0m" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const std::string _type)
{
    std::cout << "\033[1;34mParam constructor called by Dog\033[0m" << std::endl;
    this->type = _type;
    this->brain = new Brain();
    this->is_copy = 1;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "\033[1;34mCopy constructor called by Dog\033[0m" << std::endl;
    *this = obj;
}

Dog & Dog::operator=(const Dog & obj)
{
    std::cout << "\033[1;34mCopy assignment operator called by Dog\033[0m" << std::endl;
    if(this != &obj)
    {
        if (this->is_copy)
            delete this->brain;
        this->type = obj.type;
        this->brain = new Brain();
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