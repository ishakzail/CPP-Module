/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:17:21 by izail             #+#    #+#             */
/*   Updated: 2022/10/10 18:02:19 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int                 _fixedPoint;
        static const int    _fraction = 8;
    public :
        Fixed();
        Fixed(const Fixed& obj);
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed &operator=(const Fixed& obj);
        float toFloat(void) const;
        int   toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        // Comparison operators
        bool operator<(const Fixed& obj);
        bool operator>(const Fixed& obj);
        bool operator<=(const Fixed& obj);
        bool operator>=(const Fixed& obj);
        bool operator==(const Fixed& obj);
        // Arithmetic operators
        Fixed  operator*(const Fixed& obj);
        Fixed  operator+(const Fixed& obj);
        Fixed  operator-(const Fixed& obj);
        Fixed  operator/(const Fixed& obj);
        // increment / Decrement operators
        Fixed &operator--();
        Fixed &operator++();
        Fixed operator--(int);
        Fixed operator++(int);

        static Fixed &min(Fixed& obj1, Fixed & obj2);
        static Fixed &max(Fixed& obj1, Fixed & obj2);

        static const Fixed &min(const Fixed& obj1,const Fixed & obj2);
        static const Fixed &max(const Fixed& obj1,const Fixed & obj2);
        ~Fixed();

};
        std::ostream & operator<<(std::ostream &output, const Fixed &obj);