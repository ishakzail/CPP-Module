/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:21:35 by izail             #+#    #+#             */
/*   Updated: 2022/11/13 07:00:49 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
int easyfind(T &container, int found)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), found);
    if(it == container.end())
    {
        std::cout << "not found\n";
        return 0;
    }
    std::cout << std::distance(container.begin(), it);
    return  std::distance(container.begin(), it);
}