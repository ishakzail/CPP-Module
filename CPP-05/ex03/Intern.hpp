/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:41:28 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 14:20:59 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _CLASS_INTERN_HPP
# define _CLASS_INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
  public :
    Intern();
    Intern(const Intern & obj);
    Intern & operator=(const Intern & obj);
    Form *makeForm(std::string name, std::string target);
    ~Intern();
    
};

#endif