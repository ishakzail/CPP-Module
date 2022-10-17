/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:17:05 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 16:25:47 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(std::string name, int hit, int energy, int damage);
        ScavTrap(const ScavTrap& obj);
        ScavTrap &operator=(const ScavTrap& obj);
        void attack(const std::string &target);
        void guardGate();
        ~ScavTrap();
};