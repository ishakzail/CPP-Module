/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:26:42 by ishak             #+#    #+#             */
/*   Updated: 2023/04/07 21:59:53 by ishak            ###   ########.fr       */
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
        RPN(const RPN& obj);
        RPN & operator=(const RPN& obj);
        ~RPN();

        int checkExpression();
        int is_operator(char op);
        int is_operand(char op);
        void    ft_execute();
    
};