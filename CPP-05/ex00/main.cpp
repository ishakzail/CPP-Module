/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:21 by izail             #+#    #+#             */
/*   Updated: 2022/10/29 16:09:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
   Bureaucrat superQaid("superQayed", 160);
	Bureaucrat chawech("chawech", 3);
	Bureaucrat mqadem("mqadem", 2);
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
	try
	{
		std::cout << "what about me" << std::endl;
		std::cout << superQaid << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
	try
	{
		std::cout << chawech << std::endl;
		chawech.incrementBureacrat();
		std::cout << chawech << std::endl;
		chawech.incrementBureacrat();
		std::cout << chawech << std::endl;
		chawech.incrementBureacrat();
		std::cout << "what about me" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
	try
	{
		std::cout << mqadem << std::endl;
		mqadem.decrementBureacrat();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
}