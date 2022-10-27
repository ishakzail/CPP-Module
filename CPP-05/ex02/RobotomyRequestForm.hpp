/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:37 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 09:07:44 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_ROBOTOMY_REQUEST_FORM_H
# define CLASS_ROBOTOMY_REQUEST_FORM_H

#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm & obj);
        RobotomyRequestForm(std::string _target);
        void execute (Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};

#endif