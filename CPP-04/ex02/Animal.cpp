/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:42 by izail             #+#    #+#             */
/*   Updated: 2022/10/24 11:12:52 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "\033[1;33mDefault constructor called by Animal\033[0m" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "\033[1;33mCopy constructor called by Animal\033[0m" << std::endl;
    *this = obj;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "\033[1;33mParam constructor called by Animal\033[0m" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
    if(this != &obj)
    {
        std::cout << "\033[1;33mCopy assignment operator called by Animal\033[0m" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

std::string Animal::getType() const 
{
    std::cout << "\033[1;33mgetType() function called by Animal\033[0m" << std::endl;
    return this->type;
}


Animal::~Animal()
{
    std::cout << "\033[1;33mDestructor called by Animal\033[0m" << std::endl;
}