/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:07:51 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 10:30:42 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        // std::string getType() const;
        WrongCat(const WrongCat & obj);
        WrongCat &operator= (const WrongCat& obj);
        void makeSound(void) const;
        ~WrongCat();
};