/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:56 by izail             #+#    #+#             */
/*   Updated: 2022/10/26 18:19:09 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "unistd.h"

int main()
{
    const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout<<std::endl<< "/*******My Own Test********\\" <<std::endl<<std::endl;

	Animal *animal[4];
	animal[0] = new Cat();
	animal[1] = new Cat();
	animal[2] = new Dog();
	animal[3] = new Dog();
    
	for (int i = 0; i < 4; i++)
		delete animal[i];

	std::cout<<std::endl<< "/*******My Own Test********\\" <<std::endl<<std::endl;

	Cat *cat = new Cat();
	Animal *dog = new Dog();
	Cat d = *cat;

	
	dog->makeSound();
	d.makeSound();
	delete cat;
	delete dog;
	
	return 0;
}