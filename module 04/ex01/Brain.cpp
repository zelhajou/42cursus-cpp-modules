/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:19:27 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 23:20:54 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created.\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copied.\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	std::cout << "Brain assigned.\n";
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed.\n";
}

void Brain::setIdea(int index, std::string idea)
{
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return ideas[index];
}
