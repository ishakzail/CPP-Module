/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/17 15:23:09 by izail            ###   ########.fr       */
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
       void     getContact(int idx);
       int      check_index();
       
       void      check_values(std::string val);

       void     setNbrContact(int nbr);
       int      getNbrContact();
       void     searchContact(); 
};