/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:03:59 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/04 13:54:36 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickName()
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
