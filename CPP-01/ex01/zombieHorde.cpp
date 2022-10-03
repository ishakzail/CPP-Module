/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:19 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 16:39:56 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, string name)
{
    int i = -1;
    if (n <= 0)
        return (NULL);
    Zombie *Zombies = new Zombie[n];
    if (!Zombies)
        return (NULL);
    while (++i < n)
    {
        Zombies[i].setName(name);
        std::cout << i + 1 << " -- ";
        Zombies[i].announce();
    }
    return Zombies;
}