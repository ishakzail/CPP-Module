/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:35 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 15:44:17 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_HUMAN_B_H
# define CLASS_HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *weaponB;
    public :
        HumanB();
        HumanB(std::string name);
        void        attack();
        void        setWeapon(Weapon &weapon);
        ~HumanB();
};
#endif