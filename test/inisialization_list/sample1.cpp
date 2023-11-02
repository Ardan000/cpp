/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:53:46 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 18:00:25 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample1.hpp"

Sample1::Sample1(int p1, char p2, float p3) : a1(p1), a2(p2), a3(p3) {
	std::cout << "construction sample 1" << std::endl;
	std::cout << "a1: " << this->a1 << std::endl;
	std::cout << "a2: " << this->a2 << std::endl;
	std::cout << "a3: " << this->a3 << std::endl;
}

Sample1::~Sample1(void) {
	std::cout << "destruction 1" << std::endl;
}
