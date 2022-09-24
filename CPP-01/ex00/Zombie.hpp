/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:17:24 by izail             #+#    #+#             */
/*   Updated: 2022/09/24 11:41:29 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;

class Zombie
{
    private :
        string name;
    public :
        Zombie(){};
        ~Zombie(void){};
        Zombie(string name);
        void    setName(string name);
        string  getName();
        void    announce(void);
        Zombie* newZombie(string name);
        void    randomChump(string name);
};