/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:38 by izail             #+#    #+#             */
/*   Updated: 2022/10/25 16:09:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("noName"), _signed(false), sign_grade(1), execute_grade(1)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(const Form& obj) :  name(obj.name), sign_grade(obj.sign_grade), execute_grade(obj.execute_grade)  
{
    std::cout << "Copy Constructor called" << std::endl;
    this->_signed = obj._signed;
    *this = obj; 
}

unsigned int Form::getExecuteGrade() const
{
    return this->execute_grade;
}

unsigned int Form::getSignGrade() const
{
    return this->sign_grade;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSigned()
{
    return this->_signed;
}

void Form::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() <= this->sign_grade)
        this->_signed = true;
    else
        throw (GradeTooHighException());       
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high \n";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low \n";
}

Form & Form::operator=(const Form& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        const_cast<std::string&>(this->name) = obj.name;
        this->_signed = obj._signed;
        const_cast<unsigned int&>(this->execute_grade) = obj.execute_grade;
        const_cast<unsigned int&>(this->sign_grade) = obj.sign_grade;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}