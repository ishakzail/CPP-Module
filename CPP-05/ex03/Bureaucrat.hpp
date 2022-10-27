/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:18 by izail             #+#    #+#             */
/*   Updated: 2022/10/27 10:51:54 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_BUREAUCRAT_H
# define CLASS_BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        const std::string name;
        unsigned int grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string _name, int _grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        std::string getName() const;
        void   setName(const std::string _name);
        unsigned int getGrade() const;
        void setGrade(int _grade);
        void incrementBureacrat();
        void decrementBureacrat();
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

        void signForm(Form &obj);
        void executeForm(Form const & form);
        ~Bureaucrat();
};

 std::ostream & operator<<(std::ostream &output, const Bureaucrat &obj);

#endif