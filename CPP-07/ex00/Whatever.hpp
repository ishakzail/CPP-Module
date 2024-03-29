/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:04:21 by izail             #+#    #+#             */
/*   Updated: 2022/11/15 13:06:44 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_WHATEVER_H
#define CLASS_WHATEVER_H

#include <iostream>

template <typename T> 
void swap(T &a, T &b)
{
    T s;
    s = a;
    a = b;
    b = s;
}

template <typename T> 
T min(T &a, T &b)
{
    if (a >= b)
        return b;
    else
        return a;
}
template <typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif