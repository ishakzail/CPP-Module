/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:44 by izail             #+#    #+#             */
/*   Updated: 2022/10/20 14:26:10 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal & obj);
        Animal(std::string _type);
        Animal &operator=(const Animal & obj);
        std::string getType() const;
        virtual void    makeSound(void) const;
        virtual ~Animal();
};