/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:04:23 by izail             #+#    #+#             */
/*   Updated: 2022/11/07 14:33:21 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    uintptr_t uintptr;

	Data data;
	data.i = 42;
	data.c = 'a';

	std::cout << "i: " << data.i << std::endl;
	std::cout << "c: " << data.c << std::endl;
	std::cout << "data: " << &data << std::endl;

	uintptr = serialize(&data);
	std::cout << "uintptr: " << uintptr << std::endl;
	// the value of unitptr is the address of data

	Data *data_ds;
	data_ds = deserialize(uintptr);

	std::cout << "& data_ds: " << &data_ds << std::endl;
	std::cout << "new i: " << data_ds->i << std::endl;
	std::cout << "new c: " << data_ds->c << std::endl;  
    return (0);
}