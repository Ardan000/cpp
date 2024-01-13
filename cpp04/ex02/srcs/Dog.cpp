/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:28:12 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/13 00:55:17 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include <iostream>
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	this->_ideas = new Brain();
}

Dog::Dog(Dog const &rhs) : AAnimal(rhs)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_ideas = new Brain;
	*this = rhs;
}

Dog::~Dog(void)
{
	std::cout << "Dog Default Destructor Called" << std::endl;
	delete(this->_ideas);
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy Operator Called" << std::endl;
	this->_type = rhs._type;
	// this->_ideas = new Brain;
	for(int i = 0; i < 100; i++)
		this->_ideas->setIdea(rhs.getIdea(i), i);
	// this->_ideas = rhs._ideas;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !!!" << std::endl;
}

void	Dog::setIdea(std::string idea, int index)
{
	this->_ideas->setIdea(idea, index);
}

std::string	Dog::getIdea(int index) const
{
	return this->_ideas->getIdea(index);
}