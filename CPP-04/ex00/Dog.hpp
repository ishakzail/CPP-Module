/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:54 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 16:01:23 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        // std::string getType();
        // void    setType(std::string _type);
        Dog(const Dog & obj);
        Dog &operator= (const Dog& obj);
        void makeSound(void);
        ~Dog();
};