/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:09:45 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 16:13:28 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " is created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    std::cout << "FragTrap Assignment operator called" << std::endl;
    if (this != &src) {
        ClapTrap::operator=(src);
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "FragTrap " << _name << " ferociously attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
	else if (_hitPoints <= 0)
	{
        std::cout << "FragTrap " << _name << " cannot attack because it's out of hit points!" << std::endl;
    } else if (_energyPoints <= 0)
	{
        std::cout << "FragTrap " << _name << " is out of energy and cannot attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
