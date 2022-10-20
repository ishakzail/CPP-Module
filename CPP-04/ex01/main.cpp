/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:56 by izail             #+#    #+#             */
/*   Updated: 2022/10/20 10:37:18 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    Cat c;
    std::cout << "\033[1;31mbold red text\033[0m\n";
    Cat k = c;

    // std::cout << k.getType() << " ==" << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // k.makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    // std::cout << "********************WRONG********************" << std::endl;
    // const WrongAnimal* m = new WrongAnimal();
    // const WrongAnimal* n = new WrongCat();

    // std::cout << n->getType() << " " << std::endl;
    // n->makeSound(); //will output the cat sound!
    // m->makeSound();

    // delete meta;
    // delete i;
    // delete j;
    // delete m; 
    // delete n;
    return 0;
}