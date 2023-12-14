/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:44:11 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:51:14 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal(void) : _type("animal")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(Animal const & rhs)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = rhs;
}

Animal::~Animal(void)
{
	std::cout << "Animal Default Destructor Called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void	Animal::makeSound(void)
{
	std::cout << "I AM AN ANIMAL !!!" << std::endl;
}