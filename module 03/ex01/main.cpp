/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:31:21 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 15:25:37 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	

	ClapTrap claptrap("Clap-9000");

    claptrap.attack("Bandit");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("Spiderant");
    claptrap.takeDamage(12);
    claptrap.attack("Badass Psycho");

    std::cout << std::endl;

    
    ScavTrap scavtrap("Scav-9000");

    scavtrap.takeDamage(30);
    scavtrap.beRepaired(10);
    scavtrap.attack("Spiderant");
    scavtrap.takeDamage(50);
    scavtrap.attack("Badass Psycho");
    scavtrap.guardGate();

	std::cout << std::endl;
	
	return 0;
}
