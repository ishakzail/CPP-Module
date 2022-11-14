/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:17:32 by izail             #+#    #+#             */
/*   Updated: 2022/11/14 17:21:55 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;     
    
    vec.push_back(98);
    vec.push_back(3);
    vec.push_back(55);
    vec.push_back(74);
    
    
    easyfind(vec, 74);

    std::vector<char> vec1;      
    vec1.push_back('e');
    vec1.push_back('t');
    vec1.push_back('c');
    vec1.push_back('d');

    // std::cout << vec.begin() << '\n';
    // if(easyfind(vec1, 'e'))
        std::cout << "found at pos == " << easyfind(vec1, 'e') << '\n';
    
}