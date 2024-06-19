/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:21:15 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 21:56:43 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created.\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copied.\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << "Cat assigned.\n";
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed.\n";
}

void Cat::makeSound() const
{
	std::cout << "Cat sound.\n";
}