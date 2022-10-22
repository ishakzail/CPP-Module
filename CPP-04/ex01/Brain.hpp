/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:46:10 by izail             #+#    #+#             */
/*   Updated: 2022/10/22 23:30:11 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    public :
        std::string ideas[100];
        Brain();
        Brain(std::string &_ideas);
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        const std::string getIdeas(int i);
        void setIdeas(std::string _ideas);
        ~Brain();
};