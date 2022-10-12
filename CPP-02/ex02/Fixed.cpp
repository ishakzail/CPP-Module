/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:17:19 by izail             #+#    #+#             */
/*   Updated: 2022/10/11 17:37:22 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
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
    *this = obj;
}

Fixed & Fixed::operator=(const Fixed &obj)
{
    if(this != &obj)
    {
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
    this->_fixedPoint = roundf(nbr * (1 << _fraction));
}

Fixed::Fixed(const int nbr)
{
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
    // std::cout << "Destructor Called !" << std::endl;
}

// Comparison operators

bool Fixed::operator<(const Fixed& obj)
{
    return (this->_fixedPoint < obj._fixedPoint);
}

bool Fixed::operator>(const Fixed& obj)
{
    return (this->_fixedPoint > obj._fixedPoint);
}

bool Fixed::operator>=(const Fixed& obj)
{
    return (this->_fixedPoint >= obj._fixedPoint);
}

bool Fixed::operator<=(const Fixed& obj)
{
    return (this->_fixedPoint <= obj._fixedPoint);
}

bool Fixed::operator==(const Fixed& obj)
{
    return (this->_fixedPoint == obj._fixedPoint);
}

// Arithmetic operators

Fixed Fixed::operator*(const Fixed& obj)
{
    return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj)
{
    Fixed _fixed(this->toFloat() / obj.toFloat());
    return (_fixed);
}

Fixed Fixed::operator+(const Fixed& obj)
{
    Fixed _fixed;
    _fixed._fixedPoint += obj._fixedPoint;
    return (_fixed);
}

Fixed Fixed::operator-(const Fixed& obj)
{
    Fixed _fixed;
    _fixed._fixedPoint -= obj._fixedPoint;
    return (_fixed);
}

// increment / Decrement operators

Fixed & Fixed::operator--()
{
    this->_fixedPoint--;
    return (*this);
}

Fixed & Fixed::operator++()
{
    this->_fixedPoint++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_fixedPoint--;
    return(tmp);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_fixedPoint++;
    return(tmp);
}

// min && max
Fixed &Fixed::min(Fixed & obj1, Fixed & obj2)
{
    if (obj1 > obj2)
        return (obj2);
    else
        return (obj1);
}

Fixed &Fixed::max(Fixed & obj1, Fixed & obj2)
{
    if (obj1 > obj2)
        return (obj1);
    else
        return (obj2);
}

const Fixed &Fixed::min(const Fixed & obj1, const Fixed & obj2)
{
    if ((Fixed)obj1 > (Fixed)obj2)
        return (obj2);
    else
        return (obj1);
}

const Fixed &Fixed::max(const Fixed & obj1,const Fixed & obj2)
{
    if ((Fixed)obj1 > (Fixed)obj2)
        return (obj1);
    else
        return (obj2);
}