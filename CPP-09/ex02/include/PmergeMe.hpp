/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:57:37 by ishak             #+#    #+#             */
/*   Updated: 2023/04/08 15:45:39 by ishak            ###   ########.fr       */
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
        void    insertion_sort_vector(size_t size);
        void    insertion_sort_deque(size_t size);
        double    PmergeHandler(char **av, int ac);
        void    print_time();

};