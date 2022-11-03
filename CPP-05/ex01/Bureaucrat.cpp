/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:15 by izail             #+#    #+#             */
/*   Updated: 2022/11/03 20:35:03 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("noName"), grade(1)
{
    std::cout << "Default constructor called by BUREAUCRAT\n";
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade)
{
    std::cout << "Param constructor called by BUREAUCRAT\n";
    if (this->grade  < 1)
        throw (GradeTooHighException());
    else if (this->grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    std::cout << "Copy constructor called by BUREAUCRAT\n";
    *this = obj;
    // const_cast<std::string&>(this->name) += "_copy";
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj)
{
    std::cout << "Copy assigment operator called by BUREAUCRAT" << std::endl;
    if(this != &obj)
    {
        // const_cast<std::string&>(this->name) = obj.name;
        this->grade = obj.grade;     
    }
    return (*this);
}

unsigned int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

void   Bureaucrat::incrementBureacrat()
{
    if (this->grade - 1  < 1 || this->grade > 150)
        throw (GradeTooHighException());
    this->grade--;
}

void   Bureaucrat::decrementBureacrat()
{
    if (this->grade + 1 > 150 || this->grade  < 1)
        throw (GradeTooLowException());
    this->grade++;
    
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high \n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low \n";
}

void Bureaucrat::signForm(Form &obj)
{
    if (obj.getSigned())
        std::cout << this->name << " signed " << obj.getName() << std::endl;
    else
        std::cout << this->name << " couldn't sign " << obj.getName() << " because it's grade is too low" << std::endl;       
}

std::ostream & operator<<(std::ostream &output, const Bureaucrat &obj)
{
    output << obj.getName() << " bureaucrat grade " << obj.getGrade() << std::endl;
    return output; 
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called by BUREAUCRAT\n";
}