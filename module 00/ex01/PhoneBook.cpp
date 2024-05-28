/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:54:34 by zelhajou          #+#    #+#             */
/*   Updated: 2024/05/27 18:13:11 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
	currentIndex = 0;
	contactCount = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
	if (contactCount < 8)
		contactCount++;
	if (currentIndex == 8)
		currentIndex = 0;
	contacts[currentIndex].fillContact();
	currentIndex++;
}