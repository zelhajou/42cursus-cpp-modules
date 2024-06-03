/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:13:33 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/03 12:19:16 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void welcome_message()
{
	std::cout << "***************************************" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*    Welcome to the PhoneBook!        *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "***************************************" << std::endl;
}

int main()
{
	Contact c;
	std::string command;

	while (42)
	{
		std::cout << "Enter a command: (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);

		if (command.empty())
			break;
		if (command == "ADD")
			c.fillContact();
		else if (command == "DISPLAY")
			c.displayContact();
		else if (command == "SEARCH")
			std::cout << "SEARCH command selected" << std::endl;
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
