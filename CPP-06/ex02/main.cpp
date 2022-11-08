/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:42:34 by izail             #+#    #+#             */
/*   Updated: 2022/11/08 19:35:13 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base* generate(void)
{
    srand(time(0));
    int i = rand();
    if (i % 3 == 0)
        return (new A());
    else if (i % 3 == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base *base)
{
    if (dynamic_cast<A*>(base))
	{
		std::cout << "class: A" << std::endl;
		return;
	}
	else if (dynamic_cast<B*>(base))
	{
		std::cout << "class: B" << std::endl;
		return;
	}
	else if (dynamic_cast<C*>(base))
	{
		std::cout << "class: C" << std::endl;
		return;
	}
	std::cerr << "This pointer cannot cast because it dose not include the classes [A,B,C]" << std::endl;
}

void identify(Base &base)
{
    Base	check;
	try
	{
		check = dynamic_cast<A&>(base);
		std::cout << "class : A" << std::endl;
	}
	catch(std::exception& e)
	{
		try
		{
			check = dynamic_cast<B&>(base);
			std::cout << "class: B" << std::endl;
		}
		catch(std::exception& e)
		{
			try
			{
				check = dynamic_cast<C&>(base);
				std::cout << "class: C" << std::endl;
			}
			catch(std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

int main()
{
	Base * base = generate();
	identify(base);
	identify(*base);
	delete base;
}