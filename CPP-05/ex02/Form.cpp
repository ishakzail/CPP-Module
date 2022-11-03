/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:38 by izail             #+#    #+#             */
/*   Updated: 2022/11/03 16:46:31 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("noName"), _signed(false), sign_grade(1), execute_grade(1)
{
    std::cout << "Default constructor called by FORM" << std::endl;
}

Form::Form(const std::string _name, const unsigned int _sign_grade, const unsigned int _execute_grade) 
    : name(_name), _signed(false), sign_grade(_sign_grade), execute_grade(_execute_grade)
{
    std::cout << "Param constructor called by FORM" << std::endl;
    try
    {
        if (this->sign_grade < 1 || this->execute_grade < 1)
            throw (GradeTooHighException());
        else if (this->sign_grade > 150 || this->execute_grade > 150)
            throw(GradeTooLowException());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
}

Form::Form(const unsigned int _sign_grade, const unsigned int _execute_grade) 
    : _signed(false), sign_grade(_sign_grade), execute_grade(_execute_grade)
{
    std::cout << "Param constructor called by FORM" << std::endl;
    try
    {
        if (this->sign_grade < 1 || this->execute_grade < 1)
            throw (GradeTooHighException());
        else if (this->sign_grade > 150 || this->execute_grade > 150)
            throw(GradeTooLowException());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
}

Form::Form(const Form& obj) :  name(obj.name), sign_grade(obj.sign_grade), execute_grade(obj.execute_grade)  
{
    std::cout << "Copy Constructor called by FORM" << std::endl;
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

bool Form::getSigned() const
{
    return this->_signed;
}

void Form::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() <= this->sign_grade)
        this->_signed = true;
    else
        throw (GradeTooLowException());       
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "--Grade is too high--\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "--Grade is too low--\n";
}

const char *Form::FormNotSignedException::what() const throw()
{
    return "--Form not signed--\n";
}

Form & Form::operator=(const Form& obj)
{
    std::cout << "Copy assignment operator called by FORM" << std::endl;
    if (this != &obj)
    {
        const_cast<std::string&>(this->name) = obj.name;
        this->_signed = obj._signed;
        const_cast<unsigned int&>(this->execute_grade) = obj.execute_grade;
        const_cast<unsigned int&>(this->sign_grade) = obj.sign_grade;
    }
    return (*this);
}

std::ostream & operator<<(std::ostream &output, const Form &obj)
{
    output << "Form name : " << obj.getName() << "\nsign grade " << obj.getSignGrade() << "\nexecute grade " \
    << obj.getExecuteGrade() << std::endl;
    output << "is signed : ";
    if (obj.getSigned())
        std::cout << "true\n";
    else
        std::cout << "false\n";
    return output; 
}

Form::~Form()
{
    std::cout << "Destructor called by FORM" << std::endl;
}