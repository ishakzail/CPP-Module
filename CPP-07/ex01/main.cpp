/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:59:29 by izail             #+#    #+#             */
/*   Updated: 2022/11/09 15:17:21 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    int arr[5] = {0, 1, 2, 3, 4};
    char carr[2] = {'A', 'B'};
	std::string strArr[5] = {
		"hi",
		"Ali",
		"iter test"
	};
	Iter	classArr[5] = {10,20,30};

	std::cout << ">> print arr <<" << std::endl;
    iter(arr, 5, printIter);
	std::cout << std::endl;
	std::cout << ">> print carr <<" << std::endl;
    iter(carr, 2, printIter);
	std::cout << std::endl;
	std::cout << ">> print strArr <<" << std::endl;
    iter(strArr, 5, printIter);

	std::cout << "\n>>Execute iter func with class type <<\n";
	iter(arr, 5, printIter);
	iter(classArr, 4, printIter);
    return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }