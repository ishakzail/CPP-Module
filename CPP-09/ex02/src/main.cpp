/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:58:09 by ishak             #+#    #+#             */
/*   Updated: 2023/04/08 13:33:16 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage : Pmergeme nbr nbr nbr" << std::endl;
        return (EXIT_FAILURE);
    }
    PmergeMe            pmergeMe(av, ac);
}