/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 08:21:15 by izail             #+#    #+#             */
/*   Updated: 2022/10/03 15:43:17 by izail            ###   ########.fr       */
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
        void setName(string name);
        string getName();
        void    announce();
};
Zombie* newZombie(string name);
void    randomChump(string name);

#endif