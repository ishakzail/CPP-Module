/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/14 13:08:17 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int     nbr_contacts;
    public :
        PhoneBook(void){};
        ~PhoneBook(){};
       
       void     get_info(int idx);

       void     addContact();
       void     printContact();
       
       int      check_values(int idx);

       void     setNbrContact(int nbr);
       int      getNbrContact();
       // string  searchContact(); 
};