/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:17:40 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/16 00:47:28 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "AAnimal created.\n";
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
	std::cout << "AAnimal copied.\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
	std::cout << "AAnimal assigned.\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed.\n";
}

std::string AAnimal::getType() const
{
	return (type);
}
