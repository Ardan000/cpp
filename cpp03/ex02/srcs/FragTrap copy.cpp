/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:53 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:02:30 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
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