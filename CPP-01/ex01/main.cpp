/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:10 by izail             #+#    #+#             */
/*   Updated: 2022/09/25 11:46:05 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main(void)
{
    Zombie *Zs; 
    // std::cout << "Hello" ;
    Zs = zombieHorde(9, "Waaaa Baaaarcaaaa");
    // // while ()
    delete [] Zs;
    return (0);
}