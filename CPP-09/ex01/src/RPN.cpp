/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishak <ishak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:26:40 by ishak             #+#    #+#             */
/*   Updated: 2023/04/06 22:44:38 by ishak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/RPN.hpp"

// Constructors
RPN::RPN()
{}

RPN::RPN(std::string _expression): expression(_expression)
{}

RPN::RPN(const RPN &copy): myStack(copy.myStack), expression(copy.expression)
{}

// Operators
RPN & RPN::operator=(const RPN &assign)
{
	if(this != &assign)
	{
		this->myStack = assign.myStack;
		this->expression = assign.expression;
	}
	return *this;
}


int RPN::is_operand(char op)
{
    if (op >= '0' && op <= '9')
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}

int RPN::is_operator(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/')
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}

void RPN::ft_execute()
{
    std::string::iterator it;
    int val_1 = 0;
    int val_2 = 0;
    int res = 0;
    int final_value = 0;
    for(it = expression.begin(); it != expression.end(); it++)
    {
        if (is_operator(*it) && myStack.size() >= 2)
        {
            val_1 = myStack.top();
            myStack.pop();
            val_2 = myStack.top();
            myStack.pop();
            if (*it == '+')
                res = val_2 + val_1;
            else if (*it == '-')
                res = val_2 - val_1;
            else if (*it == '*')
                res = val_2 * val_1;
            else if (*it == '/')
            {
                if (val_1 == 0)
                {
                    std::cout << "Error" << std::endl;
                    return;
                }
                res = val_2 / val_1;
            }
            myStack.push(res);
        }
    }
}