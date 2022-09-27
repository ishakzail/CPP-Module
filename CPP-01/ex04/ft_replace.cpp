/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:03:24 by izail             #+#    #+#             */
/*   Updated: 2022/09/27 11:08:28 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int check_file_empty(std::ifstream ifile)
{
    std::string check;
    if (!getline(ifile, check))
        return (0);
    return (1);
}