/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:54 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 09:56:29 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
    public :
        Dog();
        Dog(std::string _type);
        Dog(const Dog & obj);
        Dog &operator= (const Dog& obj);
        void makeSound(void) const;
        virtual ~Dog();
};