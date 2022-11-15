/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:04:09 by izail             #+#    #+#             */
/*   Updated: 2022/11/15 21:13:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_MUTANT_STACK_H
#define CLASS_MUTANT_STACK_H

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>
#include <list>

template <class T, class Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public :
        MutantStack(){}
        MutantStack(const MutantStack &obj) : std::stack<T>(obj){}
        MutantStack &operator=(MutantStack const &obj)
		{
			std::stack<T, Container>::operator=(obj);
            return *this;
		}
        typedef typename Container::iterator iterator; 
        iterator begin() 
        {
            return this->c.begin();
        }
        iterator end() 
        {
            return this->c.end();
        }
        virtual ~MutantStack(){}
};

#endif