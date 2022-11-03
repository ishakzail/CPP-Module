/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:30 by izail             #+#    #+#             */
/*   Updated: 2022/11/02 16:59:18 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm",25, 5)
{
    std::cout << "Default constructor called by Presidential\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 25, 5), target(_target)
{
    std::cout << "Param connstructor called by Presidential" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj)
{
    std::cout << "Copy Constructor called by Presidential" << std::endl;
    *this = obj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    std::cout << "Copy assignment operator called by Presidential" << std::endl;  
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if(!this->getSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "destructor called by Presidential" << std::endl;
}