/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/16 10:16:14 by izail            ###   ########.fr       */
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
       
       int      check_values(std::string val);

       void     setNbrContact(int nbr);
       int      getNbrContact();
       void     searchContact(int idx); 
};