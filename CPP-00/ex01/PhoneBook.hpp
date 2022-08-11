/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/10 23:53:07 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact _Contact[8];
        int     nbr_contacts;
    
    public :
        PhoneBook(void);
        ~PhoneBook();
       
       void     addContact();
       // string  searchContact(); 
};