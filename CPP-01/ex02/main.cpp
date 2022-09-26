/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:10:04 by izail             #+#    #+#             */
/*   Updated: 2022/09/26 10:11:57 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of str       : "<< &str << std::endl;
    std::cout << "Memory address of stringPTR : "<< &stringPTR << std::endl; 
    std::cout << "Memory address of stringREF : "<< &stringREF << std::endl; 

    std::cout << "Value of str               : "<< str << std::endl;
    std::cout << "Value pointed by stringPTR : "<< *stringPTR << std::endl; 
    std::cout << "Value pointed by stringREF : "<< stringREF << std::endl; 
    
}