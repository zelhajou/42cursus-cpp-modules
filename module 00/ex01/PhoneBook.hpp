/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:28:18 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/04 19:22:25 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contact_index;
	int contact_count;

public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void displayContacts();
	void searchContact();
};

enum e_contact
{
	firstName,
	lastName,
	nickName,
	phoneNumber,
	darkestSecret
};

#endif