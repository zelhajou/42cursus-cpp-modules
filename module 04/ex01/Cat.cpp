/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:21:15 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/16 00:37:42 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat created.\n";
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copied.\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	delete brain;
	brain = new Brain(*other.brain);
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed.\n";
}

void Cat::makeSound() const
{
	std::cout << "Cat sound.\n";
}