/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:13:33 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/05 10:25:02 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

void phoneBookMenu()
{
	std::cout << "**********************************************" << std::endl;
	std::cout << "*                                            *" << std::endl;
	std::cout << "*\033[1m\033[38;5;46m    Welcome to the PhoneBook Application    \033[0m*" << std::endl;
	std::cout << "*                                            *" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cout << "Menu:" << std::endl;
	std::cout << "> \033[38;5;226mADD\033[0m    : Add a new contact" << std::endl;
	std::cout << "> \033[38;5;226mSEARCH\033[0m : Search for a contact" << std::endl;
	std::cout << "> \033[38;5;226mEXIT\033[0m   : Exit the PhoneBook" << std::endl;
	std::cout << "**********************************************" << std::endl;
}

int main()
{
	std::string	command;
	PhoneBook	phoneBook;

	phoneBookMenu();
	while (true)
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT): " << std::endl;
		std::getline(std::cin, command);

		if (std::cin.eof())
			break;
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break;
		else if (command.empty())
			continue;
		else
			std::cout << "Invalid command" << std::endl;
		if (std::cin.eof())
			break;
	}
	return (0);
}
