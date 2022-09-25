/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:19 by izail             #+#    #+#             */
/*   Updated: 2022/09/25 11:45:49 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, string name)
{
    int i = -1;
    Zombie *Zombies = new Zombie[n];
    
    while (++i < n)
    {
        Zombies[i].setName(name);
        std::cout << i + 1 << "--";
        Zombies[i].announce();
    }
    return Zombies;
}