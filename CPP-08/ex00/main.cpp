/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:17:32 by izail             #+#    #+#             */
/*   Updated: 2022/11/13 15:42:21 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // std::vector<int> vec;      
    // vec.push_back(1);
    // vec.push_back(3);
    // vec.push_back(55);
    // vec.push_back(74);

    // easyfind(vec, 74);

    std::vector<char> vec;      
    vec.push_back(56);
    vec.push_back(48);
    vec.push_back('c');
    vec.push_back('d');

    // std::cout << "vec 1 == " << vec[4] << '\n';
    if(easyfind(vec, 6))
        std::cout << "found at pos == " << easyfind(vec, 6) << '\n';
    

     
}