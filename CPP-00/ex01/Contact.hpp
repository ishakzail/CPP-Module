/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:35 by izail             #+#    #+#             */
/*   Updated: 2022/08/10 02:11:29 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

using namespace std;

class Contact
{
    private :
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;
    public : 
        Contact(void){};
        ~Contact(void){};

        void    setLastName(string lastname);
        void    setFirstName(string firstname);
        void    setNickName(string nickname);
        void    setPhoneNumber(string phonenumber);
        void    setDarkestSecret(string darkestsecret);

        string  getLastName();
        string  getFirstName();
        string  getNickName();
        string  getPhoneNumber();
        string  getDarkestSecret();
};