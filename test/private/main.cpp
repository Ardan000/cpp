/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:23:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 19:30:41 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

int	main(void) {
	Sample sample;

	std::cout << "public_foo: " << sample.public_foo << std::endl;
	// std::cout << "_private_foo: " << sample._private_foo << std::endl;
	
	sample.public_bar();
	// sample._private_bar();

	return (0);
}