/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:53:23 by izail             #+#    #+#             */
/*   Updated: 2022/10/10 10:05:35 by izail            ###   ########.fr       */
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
        ~Fixed();

};
        std::ostream & operator<<(std::ostream &output, const Fixed &obj);