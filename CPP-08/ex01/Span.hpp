/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:00:02 by izail             #+#    #+#             */
/*   Updated: 2022/11/14 21:40:22 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_SPAN_H
#define CLASS_SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private :
        unsigned int N;
        std::vector<int> vec;
    public :
        Span();
        Span(unsigned int _n);
        Span(const Span &obj);
        Span& operator=(const Span &obj);
        void    addNumber(int n);
        int    shortestSpan();
        int    longestSpan();
        void addMany(std::vector<int> &vec2);
        void printSpan();
        class FullException: public std::exception
        {
            public :
                const char * what() const throw();
        };
        class NoSpanFound: public std::exception
        {
            public :
                const char * what() const throw();
        };
        ~Span();

};

#endif