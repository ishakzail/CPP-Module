/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:21 by izail             #+#    #+#             */
/*   Updated: 2022/11/03 16:50:15 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Bureaucrat superQaid("superQaid", 1);
	PresidentialPardonForm chahada("chahada");
	Intern test;
	Form *f;
	try
	{
		// superQaid.signForm(chahada);
		f= test.makeForm("PresidentialPardonForm", "skj");
		chahada.beSigned(superQaid);
		std::cout << chahada.getSignGrade() << std::endl;
		std::cout << chahada.getSigned() << std::endl;
		chahada.execute(superQaid);
		delete f;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Form* rrf;
	Intern someRandomIntern;
	try 
	{
		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	while (1);
	// system("leaks Intern");
}