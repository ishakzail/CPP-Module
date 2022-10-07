/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:39:55 by izail             #+#    #+#             */
/*   Updated: 2022/10/07 08:22:19 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Contstructor Called" << std::endl;
    this->_fixedPoint = 0;
}

Fixed & Fixed::operator=(const Fixed &obj)
{
    if(this != &obj)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_fixedPoint = obj.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPoint = raw;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor" << std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called !" << std::endl;
}
