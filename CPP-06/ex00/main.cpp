/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:07:14 by izail             #+#    #+#             */
/*   Updated: 2022/11/05 16:13:16 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error" << std::endl;
        exit(0);
    }
    Conversion convert;
    try
    {
        std::string argument = static_cast<std::string>(av[1]);
        std::string _type = convert.getType(av[1]);
        std::cout << "type == " <<_type << std::endl;
        convert.converter(_type, argument);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
    return 0;
}