/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:40 by izail             #+#    #+#             */
/*   Updated: 2022/09/26 15:54:03 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon &weapon;
    public :

        ~HumanA();
        HumanA(std::string name, Weapon &weapon);
        
        std::string getName();
        void        setName(std::string name);
        void        attack();
};