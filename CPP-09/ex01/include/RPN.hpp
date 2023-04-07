/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:26:42 by ishak             #+#    #+#             */
/*   Updated: 2023/04/06 22:33:15 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>



class RPN
{
    private :
        std::stack<int> myStack;
        std::string expression;
    public :
        RPN();
        RPN(std::string str);
        RPN(const RPN& other);
        RPN & operator=(const RPN& other);
        ~RPN();

        int is_operator(char op);
        int is_operand(char op);
        void    ft_execute();
    
};