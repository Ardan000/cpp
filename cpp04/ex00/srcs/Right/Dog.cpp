/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:05 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 22:15:42 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &rhs) : Animal(rhs)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = rhs;
}

Dog::~Dog(void)
{
	std::cout << "Dog Default Destructor Called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !!!" << std::endl;
}