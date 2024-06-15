/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:31:21 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 15:08:04 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");

    claptrap.attack("Moulinex");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("Moulinex Beta");
    claptrap.takeDamage(12);
    claptrap.attack("Moulinex 2.0");
    return 0;
}