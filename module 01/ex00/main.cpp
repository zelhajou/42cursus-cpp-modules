/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:04:03 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/08 10:02:05 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./zombie <name>" << std::endl;
		return 1;
	}
	Zombie *zombie = newZombie(argv[1]);
	zombie->announce();
	randomChump(argv[1]);
	delete zombie;
	return 0;
}