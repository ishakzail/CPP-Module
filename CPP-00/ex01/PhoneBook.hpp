/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/10 02:41:30 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

using namespace std;

#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact _Contact[8];
    
    public :
        PhoneBook(void){};
        ~PhoneBook(){};
       
       void     addContact();
       // string  searchContact(); 
};