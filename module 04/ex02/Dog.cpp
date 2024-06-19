/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:11:19 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/16 00:38:49 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "Dog created.\n";
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copied.\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	delete brain;
	brain = new Brain(*other.brain);
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destroyed.\n";
}

void Dog::makeSound() const
{
	std::cout << "Dog sound.\n";
}