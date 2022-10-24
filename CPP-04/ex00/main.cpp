/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:56 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 10:17:53 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <unistd.h>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "********************WRONG********************" << std::endl;
    const WrongAnimal* m = new WrongAnimal();
    const WrongAnimal* n = new WrongCat();

    WrongCat wc;
    
    std::cout << n->getType() << " ===" << std::endl;
    std::cout << m->getType() << " ===" << std::endl;
    n->makeSound();
    m->makeSound();
    std::cout <<"----\n";
    wc.makeSound();
    delete meta;
    delete i;
    delete j;
    delete m; 
    delete n;
    // sleep(100);
    return 0;
}