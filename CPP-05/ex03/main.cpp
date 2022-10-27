/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:21 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 14:36:41 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	// Bureaucrat B0("Ishak", 30);
	// ShrubberyCreationForm  shru("haja");
	// // ShrubberyCreationForm shru("wati9a");
	// try
	// {
	// 	// shru.beSigned(B1);
	// 	// shru.execute(B1);
	// 	shru.beSigned(B0);
	// 	shru.execute(B0);
	// 	B0.executeForm(shru);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what();
	// }
	// Bureaucrat B1("Ishak", 30);
	// RobotomyRequestForm robot("war9a");
	// // ShrubberyCreationForm shru("wati9a");
	// try
	// {
	// 	// shru.beSigned(B1);
	// 	// shru.execute(B1);
	// 	robot.beSigned(B1);
	// 	robot.execute(B1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what();
	// }
	
	// Bureaucrat B2("Ismail", 20);
	// PresidentialPardonForm pres("bac");
	// // ShrubberyCreationForm shru("wati9a");
	// try
	// {
	// 	// shru.beSigned(B1);
	// 	// shru.execute(B1);
	// 	// pres.beSigned(B2);
	// 	pres.execute(B2);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what();
	// }
	
	Form* rrf;
	Intern someRandomIntern;
	try 
	{
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
		
}