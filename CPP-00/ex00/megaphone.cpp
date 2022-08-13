/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:53:11 by izail             #+#    #+#             */
/*   Updated: 2022/08/13 16:44:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

char    *capitalize(char *str)
{
    int i;

    i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        i++;     
    }
    return (str);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else if (ac > 1)
        while (av[++i])
            std::cout << capitalize(av[i]);

            
    std::cout << std::endl;
    return (0);
}