/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/13 15:09:48 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int     nbr_contacts;
        int     idx_contact;
    public :
        PhoneBook(void){};
        ~PhoneBook(){};
       
       void     addContact();
       void     printContact();
       

       void     setNbrContact(int nbr);
       int      getNbrContact();
       // string  searchContact(); 
};