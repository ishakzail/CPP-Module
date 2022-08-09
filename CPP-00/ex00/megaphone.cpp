/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:53:11 by izail             #+#    #+#             */
/*   Updated: 2022/08/09 21:44:52 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;

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
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else if (ac > 1)
        while (av[++i])
            cout << capitalize(av[i]);
    cout << endl;
    return (0);
}