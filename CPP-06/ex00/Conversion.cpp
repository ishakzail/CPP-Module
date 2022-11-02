/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:08 by izail             #+#    #+#             */
/*   Updated: 2022/11/02 18:26:28 by izail            ###   ########.fr       */
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

Conversion::Conversion(char *_inp)
{
    this->inp = static_cast<std::string>(_inp);
    // to_char(inp);
    to_int(inp);
    to_double(inp);
    to_float(inp);
}

// void Conversion::to_char(char *inp)
// {
//     try
//     {
//         int nbr = atoi(inp);
//         if(!isprint(nbr))
//             std::cout << "Not a printable char\n";
//         else 
            
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
// }

void Conversion::to_int(std::string inp)
{
    try
    {
        int nbr = std::stoi(inp);
        std::cout << "int : " << static_cast<int> (nbr) << std::endl;
    }
    catch(...)
    {
        std::cerr << "int : impossible" << '\n';
    }
}

void Conversion::to_float(std::string inp)
{
    try
    {
        float nbr = std::stof(inp);
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << "float : " << static_cast<float> (nbr) << "f"<< std::endl;
    }
    catch(...)
    {
        std::cerr << "float : impossible" << '\n';
    }
}

void Conversion::to_double(std::string inp)
{
    try
    {
        float nbr = std::stod(inp);
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << "double : " << static_cast<double> (nbr) << std::endl;
    }
    catch(...)
    {
        std::cerr << "double : impossible" << '\n';
    }
}

Conversion::~Conversion() {}