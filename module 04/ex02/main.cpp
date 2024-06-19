/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:39:02 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/16 00:40:11 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "---------------------\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << "---------------------\n";
	j->makeSound();
	std::cout << "---------------------\n";
	std::cout << i->getType() << " " << std::endl;
	std::cout << "---------------------\n";
	i->makeSound();

	delete j;
	delete i;
	return (0);
}