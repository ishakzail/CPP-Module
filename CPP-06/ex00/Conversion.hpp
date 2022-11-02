/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:10 by izail             #+#    #+#             */
/*   Updated: 2022/11/02 18:08:19 by izail            ###   ########.fr       */
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
        std::string inp;
    public :
        Conversion();
        // Conversion(std::string _inp);
        Conversion(char *_inp);
        Conversion(const Conversion &obj);
        Conversion & operator=(const Conversion &obj);
        ~Conversion();

        void to_char(std::string inp);
        void to_int(std::string inp);
        void to_float(std::string inp);
        void to_double(std::string inp);
};

#endif