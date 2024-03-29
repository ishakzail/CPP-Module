/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:10:04 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 16:38:24 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable : "<< &str << std::endl;
    std::cout << "The memory address held by stringPTR      : "<< stringPTR << std::endl; 
    std::cout << "The memory address held by stringREF      : "<< &stringREF << std::endl; 
    
    std::cout << "\nThe value of the string variable  : "<< str << std::endl;
    std::cout << "The value pointed to by stringPTR : "<< *stringPTR << std::endl; 
    std::cout << "The value pointed to by stringREF : "<< stringREF << std::endl; 
    
}