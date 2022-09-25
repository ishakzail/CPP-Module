/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:17 by izail             #+#    #+#             */
/*   Updated: 2022/09/25 11:07:56 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;

class Zombie 
{
    private :
        string name;
    public :
        Zombie();
        ~Zombie();
        Zombie(string n);
        void    setName(string name);
        string  getName();
        void    announce();
};

Zombie* zombieHorde(int n, string name);