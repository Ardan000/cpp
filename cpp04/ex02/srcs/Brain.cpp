/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:26:08 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 23:14:28 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor Called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "(default idea)";
}

Brain::Brain(Brain const & rhs)
{
	std::cout << "Brain copy Constructor Called" << std::endl;
	*this = rhs;
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructor Called" << std::endl;
}

Brain	& Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain copy operator Called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void	Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	return this->ideas[index];
}