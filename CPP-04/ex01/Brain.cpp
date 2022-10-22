/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:08 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 13:49:36 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[1;35mDefault constructor called by Brain\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "\0";
}

Brain::Brain(std::string &_ideas)
{
    std::cout << "\033[1;35mParam constructor called by Brain\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = _ideas;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "\033[1;35mCopy constructor called by Brain\033[0m" << std::endl;
    *this = obj;
}

Brain & Brain::operator=(const Brain &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100 ; i++)
            this->ideas[i] = obj.ideas[i];
        std::cout << "\033[1;35mCopy assignment operator called by Brain\033[0m" << std::endl;
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "\033[1;35mDestructor called by Brain\033[0m" << std::endl;
}