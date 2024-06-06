/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:03:58 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/06 11:35:32 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

    private:
	    std::string name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif