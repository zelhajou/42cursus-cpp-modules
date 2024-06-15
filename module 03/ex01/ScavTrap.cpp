/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 11:14:29 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 16:19:31 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "ScavTrap Assignment operator called" << std::endl;
    if (this != &src) {
        ClapTrap::operator=(src);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " fiercely attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " cannot attack because it's out of hit points!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " is out of energy and cannot attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}