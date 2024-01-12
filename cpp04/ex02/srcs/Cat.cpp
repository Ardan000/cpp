/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:05 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 23:55:23 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
	this->_ideas = new Brain();
}

Cat::Cat(Cat const &rhs) : AAnimal(rhs)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = rhs;
}

Cat::~Cat(void)
{
	std::cout << "Cat Default Destructor Called" << std::endl;
	delete(this->_ideas);
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy Operator Called" << std::endl;
	this->_type = rhs._type;
	this->_ideas = new Brain;
	for(int i = 0; i < 100; i++)
		this->_ideas->setIdea(rhs.getIdea(i), i);
	// this->_ideas = rhs._ideas;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !!!" << std::endl;
}

void	Cat::setIdea(std::string idea, int index)
{
	this->_ideas->setIdea(idea, index);
}

std::string	Cat::getIdea(int index) const
{
	return this->_ideas->getIdea(index);
}