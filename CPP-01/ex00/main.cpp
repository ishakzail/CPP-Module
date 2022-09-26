/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 08:34:06 by izail             #+#    #+#             */
/*   Updated: 2022/09/26 17:49:17 by izail            ###   ########.fr       */
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