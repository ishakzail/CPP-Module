/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:39:53 by izail             #+#    #+#             */
/*   Updated: 2022/10/07 08:06:06 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private :
        int                 _fixedPoint;
        static const int    _fraction = 8;
    public :
        Fixed();
        Fixed(const Fixed& obj);
        Fixed &operator=(const Fixed& Fixed);\
        int     getRawBits(void) const;
        void    setRawBits(int const raw); 
        ~Fixed();

};