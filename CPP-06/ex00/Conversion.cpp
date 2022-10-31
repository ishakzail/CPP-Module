/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:08 by izail             #+#    #+#             */
/*   Updated: 2022/10/31 11:17:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(const Conversion &obj)
{
    this->inp = obj.inp;
}

Conversion & Conversion::operator=(const Conversion &obj)
{
    if(this != &obj)
    {
        this->inp = obj.inp;
    }
    return (*this);
}

Conversion::Conversion(char *_inp) : inp(inp)
{
    to_char(inp);
    to_int(inp);
    to_double(inp);
    to_float(inp);
}

void Conversion::to_char(char *inp)
{
    try
    {
        int nbr = atoi(inp);
        if(!isprint(nbr))
            std::cout << "Not a printable char\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}