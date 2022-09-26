/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:35 by izail             #+#    #+#             */
/*   Updated: 2022/09/26 16:05:21 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *weaponB;
    public :
        HumanB();
        ~HumanB();
        HumanB(std::string name);
    
        void        attack();
        void        setWeapon(Weapon &weapon);
};