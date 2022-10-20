/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:47 by izail             #+#    #+#             */
/*   Updated: 2022/10/20 17:58:00 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    this->brain = new Brain();
    std::cout << "\033[1;32mDefaut constructor called by Cat\033[0m" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "\033[1;32mCopy constructor called by Cat\033[0m" << std::endl;
    this->brain = new Brain();
    *this = obj;
}

Cat & Cat::operator=(const Cat & obj)
{
    if(this != &obj)
    {
        std::cout << "\033[1;32mCopy assignment operator called by Cat\033[0m" << std::endl;
        *(this->brain) = *(obj.brain);
    }
    return (*this);
}

std::string Cat::getType()
{
    std::cout << "\033[1;32mgetType() function called by Cat\033[0m" << std::endl;
    return this->type;
}

void    Cat::makeSound(void)
{
    std::cout << "\033[1;32mCat is meeeeoing !\033[0m" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "\033[1;32mDestructor called by Cat\033[0m" << std::endl;
}