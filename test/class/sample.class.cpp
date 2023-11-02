/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:09 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 17:45:52 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {
	std::cout << "construction" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	std::cout << "this->bar(): ";
	this->bar();
	return ;
}

Sample::~Sample(void) {
	std::cout << "destruction" << std::endl;
	return ;
}

void	Sample::bar(void) {
	std::cout << "Member function bar called" << std::endl;
	return ;
}