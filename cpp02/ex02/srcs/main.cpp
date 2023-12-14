/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:49:00 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/13 20:28:17 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	
	Fixed a(4);
	Fixed c(2);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a - a<< std::endl;

	std::cout << b - a << std::endl;
	std::cout << b + 1 << std::endl;
	// std::cout << b + a << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}