/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:10 by izail             #+#    #+#             */
/*   Updated: 2022/11/07 10:06:20 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONVERSION_H
#define CLASS_CONVERSION_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <iomanip>

class Conversion
{
    private :
        std::string inp;
    public :
        Conversion();
        Conversion(const Conversion &obj);
        Conversion & operator=(const Conversion &obj);
        ~Conversion();
        std::string getType(std::string inp);
        void to_char(std::string inp);
        void to_int(std::string inp);
        void to_float(std::string inp);
        void to_double(std::string inp);

        void char_to_all(char c);
        void int_to_all(int i);
        void float_to_all(float f);
        void double_to_all(double d);
        
        void converter(std::string type, std::string input);
};

std::string check_float(std::string input);
std::string check_double(std::string input);

#endif