/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:58:31 by izail             #+#    #+#             */
/*   Updated: 2022/10/01 09:35:23 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
    private :
        std::string _type;
    public :
        Weapon();
        Weapon(std::string type);
        const   std::string getType();
        void    setType(std::string type);
        ~Weapon();
};