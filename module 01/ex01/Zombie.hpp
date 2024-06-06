/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:49:39 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/06 12:15:13 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
	Zombie();
	~Zombie();
	void announce() const;
	void setName(std::string name);

private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif