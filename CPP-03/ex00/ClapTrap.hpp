/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:41 by izail             #+#    #+#             */
/*   Updated: 2022/10/12 14:00:06 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int  _hit = 10;
        int _enegry = 10;
        int _damage = 0;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};