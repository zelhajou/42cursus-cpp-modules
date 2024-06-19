/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:52:45 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 21:39:38 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal created.\n";
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copied.\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other) {
		type = other.type;
	}
	std::cout << "Animal assigned.\n";
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed.\n";
}

void Animal::makeSound() const
{
	std::cout << "Animal sound.\n";
}

std::string Animal::getType() const
{
    return type;
}
