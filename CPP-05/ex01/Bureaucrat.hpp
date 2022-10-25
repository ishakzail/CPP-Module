/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:33:18 by izail             #+#    #+#             */
/*   Updated: 2022/10/25 16:05:11 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_BUREAUCRAT_H
# define CLASS_BUREAUCRAT_H

#include <iostream>
#include <exception>

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
        ~Bureaucrat();
};

 std::ostream & operator<<(std::ostream &output, const Bureaucrat &obj);

#endif