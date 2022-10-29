/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:21 by izail             #+#    #+#             */
/*   Updated: 2022/10/29 16:12:55 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat B0("Qaid", 30);
	ShrubberyCreationForm shru("wati9a");
	try
	{
		shru.beSigned(B0);
		shru.execute(B0);
		B0.executeForm(shru);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	Bureaucrat B1("Ishak", 30);
	RobotomyRequestForm robot("Document");
	try
	{
		// robot.beSigned(B1);
		robot.execute(B1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
	Bureaucrat B2("Ismail", 20);
	PresidentialPardonForm pres("House bill");
	try
	{
		pres.beSigned(B2);
		pres.execute(B2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
	
}