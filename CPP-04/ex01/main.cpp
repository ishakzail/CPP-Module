/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:56 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 10:33:26 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "unistd.h"
int main()
{
	std::cout << "********* Dogs *********\n";
	Animal *arrOfAnimal[10];
	for (int i = 0; i < 5; i++)
		arrOfAnimal[i] = new Dog();
	std::cout << "********* Cats *********\n";
	for (int j = 5; j < 10; j++)
		arrOfAnimal[j] = new Cat();

	std::cout << "********* Making Sound *********\n";
	for (int i = 0; i < 10; i++)
		arrOfAnimal[i]->makeSound();

	std::cout << "********* Destructions *********\n";
	for (int i = 0; i < 10; i++)
	{
		delete arrOfAnimal[i];
	}

	std::cout << "********* Deep copy *********\n";
	Dog mimi("mimi");
	Dog tom("tom");

	std::cout << ">>> Name: " << tom.getType() << "\n";
	tom = mimi;
	std::cout << ">>> Name: " << tom.getType() << "\n";
	std::cout << "******* leaks ********\n";
	system("leaks Brain");
	std::cout << "******* Destructions ********\n";
	Cat momo("mimi");
	Cat tomi("tom");
	momo = tomi;

	std::cout << mimi.getType() << "\n";

	
    const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout<<std::endl<< "/*******Test 1********\\" <<std::endl<<std::endl;

	Animal *animal[4];

	animal[0] = new Cat();
	animal[1] = new Cat();
	animal[2] = new Dog();
	animal[3] = new Dog();
    
	for (size_t i = 0; i < 4; i++)
		delete animal[i];

	std::cout<<std::endl<< "/*******Test 2********\\" <<std::endl<<std::endl;

	Cat *cat = new Cat();
	Cat d = *cat;
	cat->makeSound();
	d.makeSound();
	delete cat;
	return 0;
}