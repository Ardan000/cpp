/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:05 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:08:23 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Animal Default Destructor Called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaou !!!" << std::endl;
}