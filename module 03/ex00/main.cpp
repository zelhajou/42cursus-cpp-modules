/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:31:21 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/14 20:43:15 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");

    claptrap.attack("Buzz");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("Dynamo");
    claptrap.takeDamage(12);
    claptrap.attack("Butter0001");

    return 0;
}