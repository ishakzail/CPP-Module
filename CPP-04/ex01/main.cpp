/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:56 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 14:03:04 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	Cat basic;
	{
		Cat tmp (basic);
	}
    // const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;

	// std::cout<<std::endl<< "/*******Test 1********\\" <<std::endl<<std::endl;

	// Animal *animal[4];

	// animal[0] = new Cat();
	// animal[1] = new Cat();
	// animal[2] = new Dog();
	// animal[3] = new Dog();
    
	// for (size_t i = 0; i < 4; i++)
	// 	delete animal[i];

	// std::cout<<std::endl<< "/*******Test 2********\\" <<std::endl<<std::endl;

	// Cat *cat = new Cat();
	// Cat d = *cat;
	// cat->makeSound();
	// d.makeSound();
	// delete cat;
	return 0;
}