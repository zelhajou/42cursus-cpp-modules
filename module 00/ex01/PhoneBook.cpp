/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:54:34 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/04 20:08:46 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <cctype>


PhoneBook::PhoneBook()
{
	this->contact_index = 0;
	this->contact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
	std::string			contact_info[5];
	int					current_indx = 0;
	const std::string	contact_info_str[] = {"First Name", "Last Name", "Nick Name", "Phone Number", "Darkest Secret"};
	
	if (this->contact_index == 8)
		this->contact_index = 0;
	std::cout << "Enter the contact's information" << std::endl;
	while (true)
	{
		std::cout << "\033[1m\033[38;5;255m" << contact_info_str[current_indx] << ": \033[0m";
		std::getline(std::cin, contact_info[current_indx]);
		
		if (std::cin.eof())
			break;
		if (contact_info[current_indx].empty())
		{
			std::cout << "Please enter a valid " << contact_info_str[current_indx] << std::endl;
			continue;
		}
		if (current_indx == firstName)
			this->contacts[this->contact_index].setFirstName(contact_info[current_indx]);
		if (current_indx == lastName)
			this->contacts[this->contact_index].setLastName(contact_info[current_indx]);
		if (current_indx == nickName)
			this->contacts[this->contact_index].setNickName(contact_info[current_indx]);
		if (current_indx == phoneNumber)
		{
			if (contact_info[current_indx].length() != 10)
			{
				std::cout << "Please enter a valid phone number" << std::endl;
				continue;
			}
			for (int i = 0; i < 10; i++)
			{
				if (!isdigit(contact_info[current_indx][i]))
				{
					std::cout << "Please enter a valid phone number" << std::endl;
					break;
				}
			}
			this->contacts[this->contact_index].setPhoneNumber(contact_info[current_indx]);
		}
		if (current_indx == darkestSecret)
			this->contacts[this->contact_index].setDarkestSecret(contact_info[current_indx]);
		if (current_indx == darkestSecret)
			break;
		current_indx++;
	}
	this->contact_index++;
	if (this->contact_count < 8)
		this->contact_count++;
}

void PhoneBook::displayContacts()
{

	std::cout << "\033[38;5;51mYou have " << this->contact_count << " contacts available\033[0m" << std::endl;

	std::cout << "\033[1m\033[37m";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
	std::cout << "\033[0m";
	
	for (int i = 0; i < this->contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		if (this->contacts[i].getFirstName().length() > 10)
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
		if (this->contacts[i].getLastName().length() > 10)
			std::cout << this->contacts[i].getLastName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
		if (this->contacts[i].getNickName().length() > 10)
			std::cout << this->contacts[i].getNickName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].getNickName() << "|";
		std::cout << std::endl;
	}
}

void	PhoneBook::searchContact()
{
	int			index;
	std::string	input;
	int			valid_input = 0;
	if (this->contact_count == 0)
	{
		std::cout << "No contacts available" << std::endl;
		return ;
	}
	while (true)
	{
		this->displayContacts();
		std::cout << "\033[38;5;226mEnter the index of the contact you want to display or type EXIT to return to the main menu\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (input.empty())
			continue;
		if (input == "EXIT")
			return ;
		if (input.length() > 1 || !isdigit(input[0]))
		{
			std::cout << "Invalid index" << std::endl;
			continue;
		}
		index = input[0] - '0';
		if (index >= this->contact_index || index < 0)
		{
			std::cout << "Contact not found" << std::endl;
			continue;
		}
		valid_input = 1;
		break;
	}
	std::cout << "\033[1m\033[38;5;255mFirst Name: \033[0m" << this->contacts[index].getFirstName() << std::endl;
	std::cout << "\033[1m\033[38;5;255mLast Name: \033[0m" << this->contacts[index].getLastName() << std::endl;
	std::cout << "\033[1m\033[38;5;255mNick Name: \033[0m" << this->contacts[index].getNickName() << std::endl;
	std::cout << "\033[1m\033[38;5;255mPhone Number: \033[0m" << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << "\033[1m\033[38;5;255mDarkest Secret: \033[0m" << this->contacts[index].getDarkestSecret() << std::endl;
}