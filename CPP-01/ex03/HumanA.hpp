/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:40 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 15:43:56 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_HUMAN_A_H
# define CLASS_HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon &weapon;
    public :
        HumanA(std::string name, Weapon &weapon);
        std::string getName();
        void        attack();
        void        setName(std::string name);
        ~HumanA();
};

#endif