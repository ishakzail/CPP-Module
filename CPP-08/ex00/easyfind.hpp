/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:17:34 by izail             #+#    #+#             */
/*   Updated: 2022/11/13 17:24:57 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_EASYFIND_H
#define CLASS_EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
int easyfind(T &container, int found)
{
    T::iterator it;
    it = std::find(container.begin(), container.end(), found);
    if(it == container.end())
    {
        std::cout << "not found\n";
        return 0;
    }
    return  std::distance(container.begin(), it);
}

#endif