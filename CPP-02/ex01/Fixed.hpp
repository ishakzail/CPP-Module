/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:53:23 by izail             #+#    #+#             */
/*   Updated: 2022/10/09 15:24:50 by izail            ###   ########.fr       */
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
        float toFloat(void) const;
        int   toInt(void) const;
        // Fixed &operator<<(const Fixed& obj);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        
        ~Fixed();

};