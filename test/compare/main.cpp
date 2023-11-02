/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:23:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 20:04:09 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

int	main(void) {
	Sample instance1(42);
	Sample instance2(45);

	// if (&instance1 == &instance1)
	// 	std::cout << "1 == 1 physiquement" << std::endl;
	// else
	// 	std::cout << "1 != 1 physiquement" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "1 == 2 physiquement" << std::endl;
	else
		std::cout << "1 != 2 physiquement" << std::endl;

	if (instance1.compare(&instance2) == 0)
		std::cout << "1 == 2 structurellement" << std::endl;
	else
		std::cout << "1 != 2 structurellement" << std::endl;
}