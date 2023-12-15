/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:05 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:08:23 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &rhs)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = rhs;
}

Cat::~Cat(void)
{
	std::cout << "Animal Default Destructor Called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !!!" << std::endl;
}