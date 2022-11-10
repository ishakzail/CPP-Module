/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:59:27 by izail             #+#    #+#             */
/*   Updated: 2022/11/10 15:53:44 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ITER_H
#define CLASS_ITER_H

#include <iostream>

template <typename T> 
void iter(T *arr, int arrLenght, void (*f)(T&))
{
    for (int i = 0; i < arrLenght; i++)
    {
        (*f)(arr[i]);
    }
}

template <typename T>
void  printIter(T &elem)
{
	std::cout << elem << std::endl;
}

class Iter
{
    private :
        int nbr;
    public :
        Iter() : nbr(8){std::cout <<"Default const";}
        Iter(int _nbr) : nbr(_nbr) {std::cout <<"Param const";}
        int getNbr() { return nbr;}
        ~Iter(){}
    
};

std::ostream& operator<<(std::ostream& out , Iter& var)
{
	out << var.getNbr();
	return out;
}

#endif