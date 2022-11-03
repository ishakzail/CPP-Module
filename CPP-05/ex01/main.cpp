/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:21 by izail             #+#    #+#             */
/*   Updated: 2022/11/02 12:12:45 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    
	Form Form0("Chahada#", 6, 70);
	Bureaucrat Bureaucrat0("Qaid#", 8);

	std::cout << std::endl;
	std::cout << Form0 << std::endl;
	std::cout << Bureaucrat0 << std::endl;

	std::cout << "[ signForm " << Form0.getName() << " ! ]" << std::endl;
	std::cout << std::endl;
	try
	{
		// Form0.beSigned(Bureaucrat0);
		// std::cout << Form0 << std::endl;
		Bureaucrat0.signForm(Form0);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

}