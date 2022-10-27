/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:41 by izail             #+#    #+#             */
/*   Updated: 2022/10/26 14:57:45 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_SHRUBBERY_CREATION_FORM_H
# define CLASS_SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
    private :
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);
        
        void execute(Bureaucrat const &executor) const ;
        ~ShrubberyCreationForm();
};

#endif