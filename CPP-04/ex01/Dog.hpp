/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:54 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 14:39:34 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *brain;
        int is_copy;
    public :
        Dog();
        Dog(const Dog & obj);
        Dog &operator= (const Dog& obj);
        void makeSound(void) const;
        virtual ~Dog();
};