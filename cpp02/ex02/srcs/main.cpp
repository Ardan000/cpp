/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:49:00 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 15:17:23 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b;

// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a-- << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;

std::cout << b << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}