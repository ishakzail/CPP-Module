/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:39:53 by izail             #+#    #+#             */
/*   Updated: 2022/10/06 19:42:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private :
        int                 _fixed;
        static const int    _fraction;
    public :
        Fixed();
        Fixed(int fix);
        Fixed &operator=(const Fixed& Fixed);
        ~Fixed();

};