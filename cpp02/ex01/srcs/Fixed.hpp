/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:38:01 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/11 18:32:12 by sfaugere         ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	// float	toFloat(void) const;
	// int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &rhs);

#endif
