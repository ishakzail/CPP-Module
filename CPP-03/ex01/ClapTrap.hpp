/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:41 by izail             #+#    #+#             */
/*   Updated: 2022/10/17 17:48:09 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    protected :
        std::string name;
        int  _hit;
        int _energy;
        int _damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hit, int energy, int damage);
        ClapTrap(const ClapTrap& obj);
        ClapTrap &operator=(const ClapTrap& obj);
        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};