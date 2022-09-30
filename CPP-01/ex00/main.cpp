/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 08:34:06 by izail             #+#    #+#             */
/*   Updated: 2022/09/28 09:03:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    zombie = newZombie("Zombie1");
    zombie->announce();
    randomChump("ChumpZombie");
    delete (zombie);
    return (0);
}