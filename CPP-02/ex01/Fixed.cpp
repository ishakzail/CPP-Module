/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:53:20 by izail             #+#    #+#             */
/*   Updated: 2022/10/09 15:24:50 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Contstructor Called" << std::endl;
    this->_fixedPoint = 0;
}

// Fixed & Fixed::operator<<(const Fixed &obj)
// {
//     Fixed _bitWise;
//     _bitWise.
// }

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

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = roundf(nbr * (1 << this->_fraction));
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = (int)(nbr * (1 << this->_fraction));
}

float Fixed::toFloat(void) const
{
    return (roundf(this->_fixedPoint / (float)(1 << this->_fraction)));
}

int Fixed::toInt(void) const
{
    return (roundf(this->_fixedPoint / (int)(1 << this->_fraction)));
}