/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:07:49 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 10:16:18 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat :: Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat :: Copy constructor called" << std::endl;
    *this = obj;
}

WrongCat & WrongCat::operator=(const WrongCat & obj)
{
    if(this != &obj)
    {
        std::cout << "WrongCat :: Copy assignment operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat :: miao miao !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat :: Default destructor called" << std::endl;
}