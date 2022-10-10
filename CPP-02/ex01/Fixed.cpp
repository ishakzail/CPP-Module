/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:53:20 by izail             #+#    #+#             */
/*   Updated: 2022/10/10 10:56:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Contstructor Called" << std::endl;
    this->_fixedPoint = 0;
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPoint = raw;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor Called" << std::endl;
    *this = obj;
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

std::ostream &operator <<(std::ostream &output, const Fixed &obj)
{
    output << obj.toFloat();
    return output;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = roundf(nbr * (1 << _fraction));
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = (nbr * (1 << _fraction));
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_fixedPoint / (float)(1 << _fraction)));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPoint / (1 << _fraction));
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called !" << std::endl;
}