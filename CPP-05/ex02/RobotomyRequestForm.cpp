/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:34 by izail             #+#    #+#             */
/*   Updated: 2022/11/02 13:13:32 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm",72, 45)
{
    std::cout << "Default constructor called by Robotomy\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm",72, 45), target(_target)
{
    std::cout << "Param connstructor called by Robotomy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj)
{
    std::cout << "Copy Constructor called by Robotomy" << std::endl;
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
    std::cout << "Copy assignment operator called by Robotomy" << std::endl;  
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if(!this->getSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    std::cout << "Noise\n";
    srand(time(0));
    if (std::rand() % 2 == 0)
        std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << this->target << " robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "destructor called by Robotomy" << std::endl;
}