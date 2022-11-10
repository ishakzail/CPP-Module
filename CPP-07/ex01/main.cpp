/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:59:29 by izail             #+#    #+#             */
/*   Updated: 2022/11/10 15:04:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    int intArr[5] = {0, 1, 2, 3, 4};
    char charArr[2] = {'A', 'B'};
	std::string strArr [3] = {
		"Ishak",
		"Student",
		"1337"
	};
	Iter	classArr[5];
	std::cout << ">> print intArr <<" << std::endl;
    iter(intArr, 5 , printIter);
	std::cout << std::endl;
	std::cout << ">> print charArr <<" << std::endl;
    iter(charArr, 2, printIter);
	std::cout << std::endl;
	std::cout << ">> print strArr <<" << std::endl;
    iter(strArr, 3, printIter);

	std::cout << "\n>>Execute iter func with class type <<\n";
	iter(classArr, 5, printIter);
    return (0);
}
