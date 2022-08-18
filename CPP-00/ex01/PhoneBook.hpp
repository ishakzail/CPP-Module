/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/08/18 17:09:27 by izail            ###   ########.fr       */
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

       void    _adjustString(std::string str);

       void     swap_cont();
};