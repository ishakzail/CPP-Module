/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:08:45 by izail             #+#    #+#             */
/*   Updated: 2022/10/02 18:21:46 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl H;
    if (ac == 2)
        H.complain(av[1]);
    else
        std::cout << "Error arguments" << std::endl;
    return (0);
}