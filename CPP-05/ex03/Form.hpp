/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:36 by izail             #+#    #+#             */
/*   Updated: 2022/10/29 14:41:54 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_FORM_H
# define CLASS_FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private :
        const std::string name;
        bool _signed;
        const unsigned int sign_grade;
        const unsigned int execute_grade;
    public :
        Form();
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        Form(const std::string _name, const unsigned int _sign_grade, const unsigned int _execute_grade);
        Form(const unsigned int _sign_grade, const unsigned int _execute_grade);
        // getters
        unsigned int getSignGrade() const;
        unsigned int getExecuteGrade() const;
        bool getSigned() const;
        std::string getName() const;
        // exception classes
        class GradeTooHighException: public std::exception
        {
            public :
                const char * what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public :
                const char * what() const throw();
        };
        class FormNotSignedException: public std::exception
        {
            public :
                const char * what() const throw();
        };
        class FormDoesNotExistException: public std::exception
        {
            public :
                const char * what() const throw();
        };
        void beSigned(const Bureaucrat &obj);
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~Form();
};

std::ostream & operator<<(std::ostream &output, const Form &obj);

#endif