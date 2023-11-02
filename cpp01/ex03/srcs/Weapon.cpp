/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:39:42 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/26 15:44:26 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string	type) : _type(type)
{
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string const&	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string const &newType)
{
	this->_type = newType;
}