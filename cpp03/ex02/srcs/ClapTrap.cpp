/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:54:44 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:14:43 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = rhs;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Default Destructor Called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap don't have enough energy" << std::endl;
	else
	{
		this->_energyPoints--;
		if (this->_energyPoints < 0)
			this->_energyPoints = 0;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage, and " << this->_energyPoints << " energy points remaining." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amout)
{
	this->_hitPoint -= amout;
	if (this->_hitPoint < 0)
		this->_hitPoint = 0;
std::cout << _name << " takes " << amout << " damages, it has " << this->_hitPoint << " health points remaining." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amout)
{
	if (this->_energyPoints == 0)
		std::cout << _name << " don't have enough energy" << std::endl;
	else
	{
		this->_energyPoints--;
		if (this->_energyPoints < 0)
			this->_energyPoints = 0;
		this->_hitPoint += amout;
		if (this->_hitPoint < 0)
			this->_hitPoint = 0;
		std::cout << _name << " heals for " << amout << " health points. It now has " << this->_hitPoint << " health points, and " << this->_energyPoints << " energy points remaining." << std::endl;
	}
}