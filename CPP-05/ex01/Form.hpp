/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:36 by izail             #+#    #+#             */
/*   Updated: 2022/10/25 15:59:58 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
        // getters
        unsigned int getSignGrade() const;
        unsigned int getExecuteGrade() const;
        bool getSigned();
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
        
        void beSigned(const Bureaucrat &obj);
        
        ~Form();
};

std::ostream & operator<<(std::ostream &output, const Bureaucrat &obj);