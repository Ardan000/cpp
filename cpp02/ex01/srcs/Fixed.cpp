/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:49:42 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/11 18:37:04 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::Fixed(int const rhs)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixe = rhs << this->fract;

}

Fixed::Fixed(float const rhs)
{
	float a = rhs;
	std::cout << "Float constructor called" << std::endl;
	this->fixe = roundl(a << 8);
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixe = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return this->fixe;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixe = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return (o);
}