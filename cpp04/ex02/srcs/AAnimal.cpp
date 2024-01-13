/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:44:11 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/13 00:44:54 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <string>
#include <iostream>

AAnimal::AAnimal(void) : _type("animal")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & rhs)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = rhs;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal Default Destructor Called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "I AM AN ANIMAL !!!" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}