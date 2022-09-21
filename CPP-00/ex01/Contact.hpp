/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:35 by izail             #+#    #+#             */
/*   Updated: 2022/09/21 08:05:35 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private :
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public : 
        Contact(void){};
        ~Contact(void){};
        int     _index;
        void    setLastName(std::string lastname);
        void    setFirstName(std::string firstname);
        void    setNickName(std::string nickname);
        void    setPhoneNumber(std::string phonenumber);
        void    setDarkestSecret(std::string darkestsecret);

        std::string  getLastName();
        std::string  getFirstName();
        std::string  getNickName();
        std::string  getPhoneNumber();
        std::string  getDarkestSecret();

        void    setIndex(int idx);
        int     getIndex();

        // void    setInformations(int idx);
};