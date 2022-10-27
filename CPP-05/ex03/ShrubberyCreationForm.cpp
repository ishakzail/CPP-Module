/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:39 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 11:29:31 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Default constructor called by Shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) :Form("ShrubberyCreationForm", 145, 137) ,target(_target)
{
    std::cout << "Param constructor called by Shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    std::cout << "Copy constructor called by Shrubbery" << std::endl;
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
    std::cout << "Copy assginment operator called by Shrubbery" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
        if(!this->getSigned())
            throw FormNotSignedException();
        if(executor.getGrade() > this->getExecuteGrade())
            throw GradeTooLowException();
        std::string myfile = this->target + "_Shrubbery";
        std::string schema = "\t /*\\\n";
        schema += "\t/***\\\n";
        schema += "   /*****\\\n";
        schema += "\t/***\\\n";
        schema += "   /*****\\\n";
        schema += "  /*******\\\n";
        schema += " /*********\\\n";
        schema += "/***********\\\n";
        schema += "\t |*|\n";
        schema += "\t |*|\n";
        schema += "\t |*|\n";
        schema += "\t |*|\n";
        std::ofstream out_file;
        out_file.open(myfile);
        if (out_file.is_open() && out_file.good())
        {
            out_file << schema;
            out_file.close();
        }
        else 
            std::cout << "Unable to open file";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called by Shrubbery" << std::endl;
}