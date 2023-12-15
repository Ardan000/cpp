/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:44:11 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:03:27 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Default Destructor Called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I AM AN WRONG ANIMAL !!!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}