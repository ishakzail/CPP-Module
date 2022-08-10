/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <izail@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:38:35 by izail             #+#    #+#             */
/*   Updated: 2022/08/10 23:35:36 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};