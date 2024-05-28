/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:13:33 by zelhajou          #+#    #+#             */
/*   Updated: 2024/05/27 17:57:31 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (42)
	{
		std::cout << "Enter a command: (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);

		if (command.empty())
			break;
		if (command == "ADD")
		{
			phoneBook.addContact();
		}
		else if (command == "SEARCH")
			std::cout << "SEARCH command selected" << std::endl;
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
