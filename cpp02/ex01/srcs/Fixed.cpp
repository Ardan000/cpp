/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:49:42 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/12 19:45:45 by sfaugere         ###   ########.fr       */
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
	std::cout << "Float constructor called" << std::endl;
	this->fixe = roundl(rhs * ((1 << this->fract)));
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return this->getRawBits() / ((1 << this->fract));
}

float	Fixed::toFloat(void) const
{
    return this->getRawBits() / static_cast<float>((1 << this->fract));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixe = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return this->fixe;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixe = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}