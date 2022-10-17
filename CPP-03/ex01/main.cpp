/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:17:08 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 17:45:39 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap ss("Ishak");
    ScavTrap cc;

	cc = ss;
    
    std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	ss.attack("khobza");
	ss.takeDamage(10);
	ss.beRepaired(5);
    ss.attack("barca");
    ss.attack("enemy1");
    ss.attack("enemy2");
    ss.attack("enemy3");
    ss.attack("enemy4");
    ss.attack("enemy5");
    ss.attack("enemy6");
    ss.beRepaired(1003);
    ss.takeDamage(95);
    ss.attack("enemy7");
    ss.attack("enemy8");
    ss.attack("enemy9");
    ss.guardGate();
	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;

	cc.attack("madrid");
	cc.takeDamage(4);
	cc.beRepaired(2);
	cc.takeDamage(8);
    std::cout << std::endl;
    return (0);
}