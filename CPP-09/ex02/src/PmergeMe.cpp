/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:57:52 by ishak             #+#    #+#             */
/*   Updated: 2023/04/08 15:56:24 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **_av, int _ac) : av(_av), ac(_ac)
{
    double time_handiling = PmergeHandler(_av, _ac);
    print_container("before");
    clock_t start_deque = clock();
    insertion_sort_deque(this->my_deque.size());
    clock_t end_deque = clock();
    print_container("after");
    std::cout << "Time to process a range of "<< my_deque.size() << " elements with std::deque<int>  : " << double(end_deque - start_deque + time_handiling) / CLOCKS_PER_SEC * 1e3 << " us" << std::endl;
    clock_t start_vector = clock();
    insertion_sort_vector(this->my_vector.size());
    clock_t end_vector = clock();
    std::cout << "Time to process a range of "<< my_vector.size() << " elements with std::vector<int> : " << double(end_vector - start_vector + time_handiling) / CLOCKS_PER_SEC * 1e3 << " us" << std::endl;
    
}

PmergeMe::~PmergeMe(){}

double    PmergeMe::PmergeHandler(char **av, int ac)
{
    clock_t start = clock();
    int value = 0;
    std::string str;
    for (int i =1; i < ac; i++)
    {
        str = av[i];
        if (str.size() == 10)
        {
            if (str.compare("2147483647") > 0)
            {
                std::cout << "Error" << std::endl;
                exit(0);
            }
        }
        else if (str.size() > 10 )
        {
            std::cout << "Error" << std::endl;
            exit(0);
        }
        value = atoi(av[i]);
        if (!ft_is_digit(av[i]) || value < 0)
        {
            std::cout << "Error" << std::endl;
            exit(0);
        }
        this->my_vector.push_back(value);
        this->my_deque.push_back(value);
    }
    clock_t end = clock();
    return (end - start);
}

int PmergeMe::ft_is_digit(std::string str)
{
    for (size_t i =0 ; i < str.size(); i++)
    {
        if (str[0] == '+')
            i++;
        if (!isdigit(str[i]))
            return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}

void PmergeMe::print_container(std::string str)
{
    if (!str.compare("after"))
        std::cout << "After  :  ";
    else if (!str.compare("before"))  
        std::cout << "Before :  ";
    for (size_t i = 0; i < my_vector.size(); i++)
        std::cout << my_vector.at(i) << " ";
    std::cout << std::endl;
}

void PmergeMe::insertion_sort_vector(size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        int key = this->my_vector.at(i);
        int j = i - 1;
        while(j >= 0 && this->my_vector.at(j) > key)
        {
            this->my_vector.at(j + 1) = this->my_vector.at(j);
            j--;
        }
        this->my_vector.at(j + 1) = key;
    }
}

void PmergeMe::insertion_sort_deque(size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        int key = this->my_deque.at(i);
        int j = i - 1;
        while(j >= 0 && this->my_deque.at(j) > key)
        {
            this->my_deque.at(j + 1) = this->my_deque.at(j);
            j--;
        }
        this->my_deque.at(j + 1) = key;
    }
}



