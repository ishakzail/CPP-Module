/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:21 by izail             #+#    #+#             */
/*   Updated: 2022/11/03 20:33:06 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat chawech("chawech", 3);
	// Bureaucrat mqadem("mqadem", 2);
	// std::cout << "- - - - - - - - - - - - - - " << std::endl;
	// try
	// {
   	// 	Bureaucrat superQaid("superQayed", 160);
	// 	std::cout << "what about me" << std::endl;
	// 	std::cout << superQaid << std::endl;
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << "- - - - - - - - - - - - - - " << std::endl;
	// try
	// {
	// 	std::cout << chawech << std::endl;
	// 	chawech.incrementBureacrat();
	// 	std::cout << chawech << std::endl;
	// 	chawech.incrementBureacrat();
	// 	std::cout << chawech << std::endl;
	// 	chawech.incrementBureacrat();
	// 	std::cout << "what about me" << std::endl;
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << "- - - - - - - - - - - - - - " << std::endl;
	// try
	// {
	// 	std::cout << mqadem << std::endl;
	// 	mqadem.decrementBureacrat();
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << "- - - - - - - - - - - - - - " << std::endl;
	Bureaucrat a("a", 1);
	Bureaucrat c(a);
	try
	{
		c.incrementBureacrat();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << c.getGrade() << std::endl;
	Bureaucrat b("a", 150);
	try
	{
		b.decrementBureacrat();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b.getGrade() << std::endl;
	
}