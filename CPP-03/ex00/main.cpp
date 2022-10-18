/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:43 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 09:25:17 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap fighter2("Messi");
	
	std::cout << std::endl;
	std::cout << "[============================================]" << std::endl;

	fighter2.attack("madrid");
	fighter2.takeDamage(4);
	fighter2.beRepaired(2);
	fighter2.takeDamage(8);

	std::cout << std::endl;
    return (0);
}