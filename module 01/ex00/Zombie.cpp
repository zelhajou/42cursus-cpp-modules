/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:03:56 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/06 11:35:13 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie: " << name << " is dead" << std::endl;
}

void Zombie::announce() const {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

