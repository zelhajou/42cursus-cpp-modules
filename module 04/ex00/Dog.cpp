/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:11:19 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 21:18:01 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created.\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copied.\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << "Dog assigned.\n";
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed.\n";
}

void Dog::makeSound() const
{
	std::cout << "Dog sound.\n";
}