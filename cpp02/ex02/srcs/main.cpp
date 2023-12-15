/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:49:00 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 17:50:24 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a(10.05f);
Fixed const b(5.0f);

std::cout << a + b << std::endl;
std::cout << a - b << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a-- << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;

std::cout << b << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}