/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:08 by izail             #+#    #+#             */
/*   Updated: 2022/11/05 18:30:40 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(const Conversion &obj)
{
    *this = obj;
}

Conversion & Conversion::operator=(const Conversion &obj)
{
    if(this != &obj)
    {
        this->inp = obj.inp;
    }
    return (*this);
}

std::string check_float(std::string input)
{
	int count = 0;
	size_t i = 0;
	std::cout << "input size -1 == " << input.size() - 1 << std::endl;
	while (i < input.size() - 1)
	{
		std::cout << i << std::endl;
		if (input.at(0) == '-' || input.at(0) == '+')
			i++;
		if (input.at(i) == '.')
		{
			count++;
			i++;
		}
		if(!isdigit(input.at(i)))
		{
			if (!(input.at(i) == '.' && count <= 1))
				return "invalid";
		}
		i++;
	}
	return ("float");
}

std::string check_double(std::string input)
{
	int count = 0;
	size_t i = 0;
	while (i < input.size() - 1)
	{
		std::cout << i << std::endl;
		if (input.at(0) == '-' || input.at(0) == '+')
			i++;
		if (input.at(i) == '.')
		{
			count++;
			// i++;
		}
		if(!isdigit(input.at(i)))
		{
			if (input.at(i) == '.' && count <= 1)
				i++;	
			else
				return "invalid";
		}
		i++;
	}
	return ("double");
}

std::string Conversion::getType(std::string input)
{
	size_t i = -1;
	while (++i < input.size())
		std::cout << "char " << i << " == "<< input.at(i) <<std::endl;
    if (input == "-inf" || input == "+inf" || input == "nan")
		return ("double");
	else if (input.length() > 3 && input.at(input.length() - 1) == 'f' )
	{
		return (check_float(input));
	}
	else if (input == "-inff" || input == "+inff" || input == "nanf")
		return ("float");
	else if (input.length() > 2 && input.find('.') != std::string::npos && isdigit(input.at(input.length() - 1)))
	{
		return (check_double(input));
	}
	else if (input.length() == 1)
	{
		char c = input.at(0);
		if (c >= '0' && c <= '9')
			return ("int");
		else if (c >= 32 && c <= 126)
			return ("char");
		else
			return ("invalid");
	}
	else if (input.length() > 1)
    {
        for (size_t i = 0; i < input.length(); i++)
		{
			if (input.at(i) == '+' || 	input.at(i) == '-')
				i++;
            if (!isdigit(input.at(i)))
                return ("invalid");
		}
		return ("int");
    }
    else
		return ("invalid");
}

// Conversion::Conversion(char *_inp)
// {
//     inp = (_inp);
    
//     // check_input(inp);
//     // to_char(inp);
//     // to_int(inp);
//     // to_float(inp);
//     // to_double(inp);
// }

void Conversion::converter(std::string type, std::string input)
{
    if (type == "int")
    {
		int i = std::stoi(input);
        int_to_all(i);    
    }
    else if (type == "char")
    {
        char c = input.at(0);
        char_to_all(c);
    }
    else if (type == "double")
    {
        double d = std::stod(input);
        double_to_all(d);
    }
    else if (type == "float")
    {
        float f = std::stof(input);
        float_to_all(f);
    }
    else if (type == "invalid")
        std::cout << "Invalid input" << std::endl;
}

void Conversion::char_to_all(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}


void Conversion::int_to_all(int i)
{
	if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else if (i <= 126 || i >= 32)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
		
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void		Conversion::float_to_all(float f) {
	if (f > 256 || f < 0 || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f > 126 || f < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if (f > INT_MAX || f < INT_MIN || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void    Conversion::double_to_all(double d) {
	if (d > 256 || d < 0 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d > 126 || d < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (d > INT_MAX || d < INT_MIN || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	
	if (d > __FLT_MAX__ || d < __FLT_MIN__ || d != d)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;

	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

// void Conversion::to_char(std::string inp)
// {
//     try
//     {
//         if(!isprint(stoi(inp)))
//             std::cout << "char : Non displayable\n";
//         else 
//             std::cout << "char: '" << static_cast<char>(stoi(inp)) << "'"<< std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "char : impossible" << '\n';
//     }
    
// }

// void Conversion::to_int(std::string inp)
// {
//     try
//     {
//         int nbr = std::stoi(inp);
//         std::cout << "int : " <<  (nbr) << std::endl;
//     }
//     catch(...)
//     {
//         std::cerr << "int : impossible" << '\n';
//     }
// }

// void Conversion::to_float(std::string inp)
// {
//     try
//     {
//         float nbr = std::stof(inp);
//         std::cout << std::fixed << std::setprecision(1);
//         std::cout << "float : " <<  (nbr) << "f"<< std::endl;
//     }
//     catch(...)
//     {
//         std::cerr << "float : impossible" << '\n';
//     }
// }

// void Conversion::to_double(std::string inp)
// {
//     try
//     {
//         float nbr = std::stod(inp);
//         std::cout << std::fixed << std::setprecision(1);
//         std::cout << "double : " << (nbr) << std::endl;
//     }
//     catch(...)
//     {
//         std::cerr << "double : impossible" << '\n';
//     }
// }

Conversion::~Conversion() {}