/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:00:46 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 18:04:55 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample2.hpp"

Sample2::Sample2(int p1, char p2, float p3) {
	std::cout << "construction sample 2" << std::endl;
	this->a1 = p1;
	this->a2 = p2;
	this->a3 = p3;
	std::cout << "a1: " << this->a1 << std::endl;
	std::cout << "a2: " << this->a2 << std::endl;
	std::cout << "a3: " << this->a3 << std::endl;
}

Sample2::~Sample2(void) {
	std::cout << "destruction 2" << std::endl;
}