/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:49:42 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/13 20:24:54 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/* constructor & destructor */

Fixed::Fixed(void) : fixe(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::Fixed(int const rhs)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fixe = rhs << this->fract;

}

Fixed::Fixed(float const rhs)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fixe = roundl(rhs * 256);
}

Fixed::~Fixed(void)
{
	// std::cout << "Default destructor called" << std::endl;
}

/* functions */

int	Fixed::toInt(void) const
{
	return this->getRawBits() / ((1 << this->fract));
}

float	Fixed::toFloat(void) const
{
    return this->getRawBits() / static_cast<float>((1 << this->fract));
}

int Fixed::getRawBits(void) const
{
	return this->fixe;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixe = raw;
}

/* operator */

Fixed & Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixe = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed copy(this->fixe + rhs.fixe);
	return copy;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed copy(this->fixe + rhs.fixe);
	return copy;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed copy(this->toFloat() * rhs.toFloat());
	return copy;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed copy(this->toFloat() / rhs.toFloat());
	return copy;
}

Fixed & Fixed::operator++(void)
{
	this->fixe++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	copy(*this);
	this->fixe++;
	return copy;
}

Fixed & Fixed::operator--(void)
{
	this->setRawBits(this->toFloat() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	copy(*this);
	this->setRawBits(this->toFloat() - 1);
	return copy;
}

/* functions min/max */

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}