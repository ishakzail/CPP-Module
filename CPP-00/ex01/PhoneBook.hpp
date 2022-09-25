/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:11:10 by izail             #+#    #+#             */
/*   Updated: 2022/09/25 09:41:00 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_PHONEBOOK_H
# define CLASS_PHONEBOOK_H

#include "Contact.hpp"
using std::string;
class PhoneBook
{
    private :
        Contact contacts[8];
        int     nbr_contacts;
        int     i;
    public :
        PhoneBook();
        ~PhoneBook();
       
       void     get_info(int idx);
       void     set_info(int idx, std::string f, std::string l, std::string n, std::string p, std::string d);
       std::string     get_input(std::string str);
       void     check_str(std::string str);
       void     addContact();
       void     printContact();
       void     getContact(int idx);
       int      check_index();
       
        int      ft_atoi(std::string str);
        void     setNbrContact(int nbr);
        int      getNbrContact();
        void     searchContact();
        int      check_is_int(std::string str);
        void    _adjustString(std::string str);
        std::string    check_get_str(std::string str);
        void    set_info(std::string f, std::string l, std::string n, std::string p, std::string d, int idx);
};

#endif