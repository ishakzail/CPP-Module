/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:44 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 18:02:02 by izail            ###   ########.fr       */
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
        virtual std::string getType();
        virtual void setType(std::string _type);
        Animal &operator=(const Animal & obj);
        virtual void    makeSound(void);
        ~Animal();
};