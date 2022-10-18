/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:17:08 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 09:55:13 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ScavTrap fighter1("Fighter#1");
	ScavTrap fighter2("Fighter#2");
	ScavTrap fighter3(fighter1);
	FragTrap fighter4("Fighter#3");
	std::cout << std::endl;
	std::cout << "[====================Round 1====================]" << std::endl;

	fighter4.attack("Enemy#1");
	fighter4.takeDamage(110);
	fighter4.beRepaired(5);
	fighter4.highFivesGuys();

	std::cout << std::endl;
	std::cout << "[====================Round 2====================]" << std::endl;

	fighter2.attack("Enemy#2");
	fighter2.takeDamage(4);
	fighter2.beRepaired(2);
	fighter2.takeDamage(8);
	fighter2.guardGate();

	std::cout << std::endl;
	std::cout << "[====================Round 3====================]" << std::endl;

	fighter3.attack("Enemy#3");
	fighter3.takeDamage(9);
	fighter3.beRepaired(3);
	fighter3.guardGate();

	std::cout << std::endl;
    return (0);
}