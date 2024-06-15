/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:31:21 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 16:29:43 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap("Clap-9000");

    claptrap.attack("Moulinex");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("Moulinex Beta");
    claptrap.takeDamage(12);
    claptrap.attack("Moulinex 2.0");

    std::cout << std::endl;

    ScavTrap scavtrap("Scav-9000");

    scavtrap.attack("Moulinex");
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(10);
    scavtrap.attack("Moulinex");
    scavtrap.takeDamage(50);
    scavtrap.attack("Moulinex 2.0");
    scavtrap.guardGate();

    std::cout << std::endl;

    FragTrap fragtrap("Frag-9000");

    fragtrap.attack("Moulinex");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);
    fragtrap.attack("Moulinox Beta");
    fragtrap.takeDamage(40);
    fragtrap.attack("Moulinex 2.0");
    fragtrap.highFivesGuys();

    return 0;
}
