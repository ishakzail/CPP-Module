/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:32:32 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 09:53:15 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_PRESIDENTIAL_PARDON_FORM_H
# define CLASS_PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm & obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm & obj);
        PresidentialPardonForm(std::string _target);
        void execute (Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};

#endif