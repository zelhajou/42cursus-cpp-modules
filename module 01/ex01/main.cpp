/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:52:56 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/08 10:47:58 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 26;
	Zombie *zombies = zombieHorde(N, "HordeZombie");

	for (int i = 0; i < N; i++) {
		std::cout << "[" << i + 1 << "] ";
		zombies[i].announce();
	}
	delete[] zombies;
	return 0;							
}
