/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:15 by izail             #+#    #+#             */
/*   Updated: 2022/11/04 20:54:20 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("noName"), grade(1)
{
    std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade)
{
    std::cout << "Param constructor called\n";
    if (this->grade  < 1)
        throw (GradeTooHighException());
    else if (this->grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    std::cout << "Copy constructor called\n";
    *this = obj;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if(this != &obj)
    {
        this->grade = obj.grade;     
    }
    return (*this);
}

int Bureaucrat::getGrade() const
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
    if (this->grade + 1 > 150 || this->grade < 1)
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

std::ostream & operator<<(std::ostream &output, const Bureaucrat &obj)
{
    output << obj.getName() << " bureaucrat grade " << obj.getGrade() << std::endl;
    return output; 
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called\n";
}