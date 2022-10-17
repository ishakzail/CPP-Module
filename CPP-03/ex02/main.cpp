/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:17:08 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 14:18:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap fighter1("Fighter#1");
	ScavTrap fighter2("Fighter#2");
	ScavTrap fighter3(fighter1);

	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	fighter1.attack("Enemy#1");
	fighter1.takeDamage(110);
	fighter1.beRepaired(5);
	fighter1.guardGate();

	std::cout << std::endl;
	// std::cout << "[====================Round 2====================]" << std::endl;

	// fighter2.attack("Enemy#2");
	// fighter2.takeDamage(4);
	// fighter2.beRepaired(2);
	// fighter2.takeDamage(8);
	// fighter2.guardGate();

	// std::cout << std::endl;
	// std::cout << "[====================Round 3====================]" << std::endl;

	// fighter3.attack("Enemy#3");
	// fighter3.takeDamage(9);
	// fighter3.beRepaired(3);
	// fighter3.guardGate();

	std::cout << std::endl;

    // ScavTrap ss("Ishak");
    // // ScavTrap cc("Khobza");
    
    // std::cout << std::endl;
	// std::cout << "[====================Round 1====================]" << std::endl;

	// ss.attack("khobza");
	// ss.takeDamage(10);
	// ss.beRepaired(5);
    // ss.attack("barca");
    // ss.attack("enemy1");
    // ss.attack("enemy2");
    // ss.attack("enemy3");
    // ss.attack("enemy4");
    // ss.attack("enemy5");
    // ss.attack("enemy6");
    // ss.beRepaired(1003);
    // ss.takeDamage(95);
    // ss.attack("enemy7");
    // ss.attack("enemy8");
    // ss.attack("enemy9");
    // ss.guardGate();
	// std::cout << std::endl;
	// // std::cout << "[====================Round 2====================]" << std::endl;

	// // cc.attack("madrid");
	// // cc.takeDamage(4);
	// // cc.beRepaired(2);
	// // cc.takeDamage(8);
    
    return (0);
}