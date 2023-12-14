/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:12:28 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:09:53 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Default Destructor Called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap don't have enough energy" << std::endl;
	else
	{
		this->_energyPoints--;
		if (this->_energyPoints < 0)
			this->_energyPoints = 0;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap keeper mode" << std::endl;
}