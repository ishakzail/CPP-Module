/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:56 by izail             #+#    #+#             */
/*   Updated: 2022/10/18 16:17:58 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal meta;
    Dog j;
    Animal* i = new Cat();
    std::cout << j.getType() << " == " << std::endl;
    std::cout << i->getType() << " == " << std::endl;
    i->makeSound(); //will output the cat sound!
    j.makeSound();
    j.makeSound();
    meta.makeSound();
    return 0;
}