/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:57:17 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 15:43:30 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_ZOMBIE_H
# define CLASS_ZOMBIE_H

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

#endif