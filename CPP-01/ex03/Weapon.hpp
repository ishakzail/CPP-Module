/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:31 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 16:17:37 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_WEAPON_H
# define CLASS_WEAPON_H

#include <iostream>

class Weapon
{
    private :
        std::string _type;
    public :
        Weapon();
        Weapon(std::string type);
        const   std::string &getType();
        void    setType(std::string type);
        ~Weapon();
};
#endif