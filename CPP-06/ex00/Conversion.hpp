/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:10 by izail             #+#    #+#             */
/*   Updated: 2022/10/31 11:16:19 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONVERSION_H
#define CLASS_CONVERSION_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

class Conversion
{
    private :
        char *inp;
    public :
        Conversion();
        Conversion(char *_inp);
        Conversion(const Conversion &obj);
        Conversion & operator=(const Conversion &obj);
        ~Conversion();

        void to_char(char *inp);
        void to_int(char *inp);
        void to_float(char *inp);
        void to_double(char *inp);
};

#endif