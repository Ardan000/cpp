/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:38:01 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/13 20:22:12 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
	int	fixe;
	static int const fract = 8;

	public:
	Fixed(void);
	Fixed(int const rhs);
	Fixed(float const rhs);
	Fixed(Fixed const & rhs);
	~Fixed(void);

	Fixed	&operator=(Fixed const & rhs);
	
	bool	operator>(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	
	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	static Fixed min(Fixed &a, Fixed &b);
	static Fixed min(Fixed const &a, Fixed const &b);
	static Fixed max(Fixed &a, Fixed &b);
	static Fixed max(Fixed const &a, Fixed const &b);


	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream & operator<<(std::ostream & o, Fixed const &rhs);

#endif
