/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:00:00 by izail             #+#    #+#             */
/*   Updated: 2022/11/14 21:54:12 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0){}

Span::Span(unsigned int _n)
{
    this->N = _n;
}

Span::Span(const Span& obj)
{
    *this = obj;
}

Span & Span::operator=(const Span& obj)
{
    if(this != &obj)
    {
        this->N = obj.N;
        this->vec = obj.vec;
    }
    return (*this);
}

const char *Span::FullException::what() const throw()
{
    return "Exception : Span is full\n";
}

const char *Span::NoSpanFound::what() const throw()
{
    return "Exception : No span found\n";
}

void Span::addNumber(int n)
{
    if(vec.size() == N)
        throw (FullException());
    else
        vec.push_back(n);
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw (NoSpanFound());
    int min = vec[1] - vec[0];
    for (unsigned int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] < min)
        {
            min = vec[i + 1] - vec[i];
            // if (min < 0)
            //     min *= -1;
        }
    }
    return (min);
}

int Span::longestSpan()
{
    int max = vec[1] - vec[0];
    for (unsigned int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] > max)
            max = vec[i + 1] - vec[i];
            // if (max < 0)
            //     max *= -1;
    }
    // if (vec.size() < 2)
    //     throw (NoSpanFound());
    // int max = *std::max_element(vec.begin(), vec.end());
    // int min = *std::min_element(vec.begin(), vec.end());
    
    // return (max - min);
    return (max);
}

void Span::addMany(std::vector<int> &vec2)
{
    if (this->N < vec2.size())
        throw (FullException());
     vec.insert(vec.end() , vec2.begin(), vec2.end());
}

void Span::printSpan()
{
    for (unsigned int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << std::endl;
}


Span::~Span(){}