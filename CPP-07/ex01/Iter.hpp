/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:59:27 by izail             #+#    #+#             */
/*   Updated: 2022/11/12 10:35:01 by izail            ###   ########.fr       */
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
void iter(T const *arr, int arrLenght, void (*f)(T const &))
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

#endif