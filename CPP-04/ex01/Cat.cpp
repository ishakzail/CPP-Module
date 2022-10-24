/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:47 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 10:01:06 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    std::cout << "\033[1;32mDefaut constructor called by Cat\033[0m" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const std::string _type)
{
    std::cout << "\033[1;34mParam constructor called by Cat\033[0m" << std::endl;
    this->type = _type;
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
    std::cout << "\033[1;32mCopy constructor called by Cat\033[0m" << std::endl;
    this->brain = new Brain();
    *this = obj;
    this->type += "_copy";
}

Cat & Cat::operator=(const Cat & obj)
{
    std::cout << "\033[1;32mCopy assignment operator called by Cat\033[0m" << std::endl;
    if(this != &obj)
    {
        delete this->brain;
        this->type = obj.type;
        this->brain = new Brain();
        *(this->brain) = *(obj.brain);
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "\033[1;32mCat is meeeeoing !\033[0m" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "\033[1;32mDestructor called by Cat\033[0m" << std::endl;
}