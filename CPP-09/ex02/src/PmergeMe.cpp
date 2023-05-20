/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:57:52 by ishak             #+#    #+#             */
/*   Updated: 2023/05/20 14:53:56 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **_av, int _ac) : av(_av), ac(_ac)
{
    double time_handiling = PmergeHandler(_av, _ac);
    clock_t start_deque = clock();
    merge_insertion_sort_deque(0, this->my_vector.size() - 1);
    clock_t end_deque = clock();
    print_container("before");
    clock_t start_vector = clock();
    merge_insertion_sort_vector(0, this->my_vector.size() - 1);
    clock_t end_vector = clock();
    print_container("after");
    std::cout << "Time to process a range of "<< my_deque.size() << " elements with std::deque<int>  : " << double(end_deque - start_deque + time_handiling) / CLOCKS_PER_SEC * 1e3  << " ms" << std::endl;
    std::cout << "Time to process a range of "<< my_vector.size() << " elements with std::vector<int> : " << double(end_vector - start_vector + time_handiling) / CLOCKS_PER_SEC * 1e3 << " ms" << std::endl;
    
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
        if (str.empty())
        {
            std::cout << "Error" << std::endl;
            exit(0);
        }
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

void PmergeMe::insertion_sort_deque(int left, int right)
{
    for (int i = left + 1; i <= right; i++)
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

void PmergeMe::insertion_sort_vector(int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int tmp = this->my_vector[i];
        int j = i - 1;
        while (j >= left &&  this->my_vector[j] > tmp)
        {
             this->my_vector[j + 1] =  this->my_vector[j];
            j--;
        }
         this->my_vector[j + 1] = tmp;
    }
}

void PmergeMe::merge_vector(int left, int mid, int right)
{
    int left_length = mid - left + 1;
    int right_length = right - mid;

    std::vector<int> tmp_left(left_length);
    std::vector<int> tmp_right(right_length);

    for (int i = 0; i < left_length; i++)
        tmp_left[i] = this->my_vector[left + i];
    for (int i = 0; i < right_length; i++)
        tmp_right[i] = this->my_vector[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < left_length && j < right_length)
    {
        if (tmp_left[i] <= tmp_right[j])
        {
            this->my_vector[k] = tmp_left[i];
            i++;
        }
        else
        {
            this->my_vector[k] = tmp_right[j];
            j++;
        }
        k++;
    }

    while (i < left_length)
    {
        this->my_vector[k] = tmp_left[i];
        i++;
        k++;
    }

    while (j < right_length)
    {
        this->my_vector[k] = tmp_right[j];
        j++;
        k++;
    }
}

void PmergeMe::merge_deque(int left, int mid, int right)
{
    int left_length = mid - left + 1;
    int right_length = right - mid;

    std::deque<int> tmp_left(left_length);
    std::deque<int> tmp_right(right_length);

    for (int i = 0; i < left_length; i++)
        tmp_left[i] = this->my_deque[left + i];
    for (int i = 0; i < right_length; i++)
        tmp_right[i] = this->my_deque[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < left_length && j < right_length)
    {
        if (tmp_left[i] <= tmp_right[j])
        {
            this->my_deque[k] = tmp_left[i];
            i++;
        }
        else
        {
            this->my_deque[k] = tmp_right[j];
            j++;
        }
        k++;
    }

    while (i < left_length)
    {
        this->my_deque[k] = tmp_left[i];
        i++;
        k++;
    }

    while (j < right_length)
    {
        this->my_deque[k] = tmp_right[j];
        j++;
        k++;
    }
}

void PmergeMe::merge_insertion_sort_vector(int left, int right)
{
    if (right - left >= 10)
    {
        int mid = (right + left) / 2;
        merge_insertion_sort_vector(left, mid);
        merge_insertion_sort_vector(mid + 1, right);
        merge_vector(left, mid, right);
    }
    else
        insertion_sort_vector(left, right);
}

void PmergeMe::merge_insertion_sort_deque(int left, int right)
{
    if (right - left >= 10)
    {
        int mid = (right + left) / 2;
        merge_insertion_sort_deque(left, mid);
        merge_insertion_sort_deque(mid + 1, right);
        merge_deque(left, mid, right);
    }
    else
        insertion_sort_deque(left, right);
}



