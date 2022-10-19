/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:49 by izail             #+#    #+#             */
/*   Updated: 2022/10/19 05:37:06 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        std::string getType();
        Cat(const Cat & obj);
        Cat &operator= (const Cat& obj);
        void makeSound(void) const;
        ~Cat();
};