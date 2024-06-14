/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:37:39 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/14 20:40:00 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is alive and ready for action!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is no more. RIP ClapTrap!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
   if (_energyPoints > 0 && _hitPoints > 0)
   {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
	else if (_hitPoints <= 0)
	{
        std::cout << "ClapTrap " << _name << " cannot attack because it's out of hit points!" << std::endl;
    }
	else if (_energyPoints <= 0) 
	{
        std::cout << "ClapTrap " << _name << " is out of energy and cannot attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
        _hitPoints -= amount;
        if (_hitPoints < 0)
			_hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        if (_hitPoints == 0)
            std::cout << "ClapTrap " << _name << " has died!" << std::endl;
    }
	else
	{
        std::cout << "ClapTrap " << _name << " is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repairs itself and gains " << amount << " hit points!" << std::endl;
    }
	else if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired because it's out of hit points!" << std::endl;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy and cannot be repaired!" << std::endl;
	}
}