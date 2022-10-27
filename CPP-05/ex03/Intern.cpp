/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:41:30 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 14:37:02 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor called ny INTERN\n";
}

Intern::Intern(const Intern &obj)
{
    std::cout << "Copy constructor called ny INTERN\n";
    *this = obj;
}

Intern & Intern::operator=(const Intern & obj)
{
    std::cout << "Copy assignment operator called ny INTERN\n";
    if (this != &obj)
        *this = obj;
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    int i = -1;
    
    while (++i < 3)
        if(forms[i] == name)
            break;
            
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << forms[i] << std::endl;
            return (new PresidentialPardonForm(target));
            break;
        case 1:
            std::cout << "Intern creates " << forms[i] << std::endl;
            return (new RobotomyRequestForm(target));
            break;
        case 2:
            std::cout << "Intern creates " << forms[i] << std::endl;
            return (new ShrubberyCreationForm(target));
            break;
        default:
            throw (Form::FormDoesNotExistException());
            break;
    }
}

Intern::~Intern()
{
    std::cout <<"Destructor called by INTERN\n";
}