/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:47 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 23:48:04 by izail            ###   ########.fr       */
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
    this->is_copy = 1;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "\033[1;32mCopy constructor called by Cat\033[0m" << std::endl;
    *this = obj;
    
}

Cat & Cat::operator=(const Cat & obj)
{
    std::cout << "\033[1;32mCopy assignment operator called by Cat\033[0m" << std::endl;
    if(this != &obj)
    {
        if(this->is_copy)
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