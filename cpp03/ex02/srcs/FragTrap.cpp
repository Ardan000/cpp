/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:53 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 15:44:15 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Default Destructor Called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "FragTrap don't have enough energy for attack." << std::endl;
	else
	{
		this->_energyPoints--;
		if (this->_energyPoints < 0)
			this->_energyPoints = 0;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage, and " << this->_energyPoints << " energy points remaining." << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five :) !!" << std::endl; 
}