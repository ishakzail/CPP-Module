/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 08:36:26 by izail             #+#    #+#             */
/*   Updated: 2022/09/28 08:46:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(string name)
{
    Zombie *zomb;
    zomb = new Zombie(name);
    if(!zomb)
        return (NULL);
    return (zomb);
}