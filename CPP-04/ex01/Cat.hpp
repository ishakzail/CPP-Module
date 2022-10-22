/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:49 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 13:59:27 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *brain;
        int is_copy;
    public :
        Cat();
        Cat(const Cat & obj);
        Cat &operator= (const Cat& obj);
        void makeSound(void) const;
        virtual ~Cat();
};