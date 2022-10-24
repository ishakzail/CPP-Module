/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:07:46 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 10:16:12 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal & obj);
        WrongAnimal &operator=(const WrongAnimal & obj);
        std::string getType() const;
        void    makeSound(void) const;
        virtual ~WrongAnimal();
};