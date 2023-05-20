/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:57:37 by ishak             #+#    #+#             */
/*   Updated: 2023/05/18 09:51:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <ctime>
# include <iomanip>
# include <cstdlib>


class PmergeMe
{
    
    private :
        char    **av;
        int     ac;
        std::vector<int> my_vector;
        std::deque<int> my_deque;

    public :
        PmergeMe();
        PmergeMe(char **av, int ac);
		PmergeMe(const PmergeMe &obj);
		PmergeMe & operator=(const PmergeMe &obj);
        ~PmergeMe();

        int     ft_is_digit(std::string str);
        void    print_container(std::string _prefix);
        void    insertion_sort_vector(int left, int right);
        void    insertion_sort_deque(int left, int right);
        void    merge_vector(int left, int mid, int right);
        void    merge_deque(int left, int mid, int right);
        void    merge_insertion_sort_vector(int left, int right);
        void    merge_insertion_sort_deque(int left, int right);
        double    PmergeHandler(char **av, int ac);
        void    print_time();

};