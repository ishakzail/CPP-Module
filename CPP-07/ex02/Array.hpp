/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail < izail@student.1337.ma >            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:16:21 by izail             #+#    #+#             */
/*   Updated: 2022/11/11 09:40:57 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ITER_H
#define CLASS_ITER_H

#include <iostream>
#include <exception>
#include <cstdlib>

template <class T>
class Array
{
    private :
        unsigned int n;
        T *a;
    public :
        Array() : n(0), a(NULL){}
        Array(unsigned int _n) : n(_n)
        {
            if (n < 1)
                a = NULL;
            else
                a = new T[n];
        }
        Array(const Array &obj)
        {
            this->n = obj.n;
            this->a = new T[this->n];
            for (unsigned int i = 0; i < n; i++)
                this->a[i] = obj.a[i];
        }
        Array & operator=(const Array &obj)
        {
            if (this != &obj)
            {
                delete []a;
                this->n = obj.n;
                this->a = new T[this->n];
                for (unsigned int i = 0; i < n; i++)
                    this->a[i] = obj.a[i];
            }
            return (*this);
        }
        T& operator[] (unsigned int i)
        {
            if (i > n)
                throw std::exception();
            return a[i];   
        }
        unsigned int size() const { return n;}
        ~Array()
        { 
            if (n > 0)
                delete []a; 
        }
};

#endif