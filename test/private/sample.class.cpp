/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:09 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 19:27:55 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {
	std::cout << "constructor called" << std::endl;
	
	std::cout << "public_foo: " << this->public_foo << std::endl;
	std::cout << "private_foo: " << this->_private_foo << std::endl;

	public_bar();
	_private_bar();
	std::cout << "end constructor" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "destructor called" << std::endl;
	return ;
}

void	Sample::public_bar(void) const{
	std::cout << "Member function public_bar called" << std::endl;
	return ;
}

void	Sample::_private_bar(void) const{
	std::cout << "Member function private_bar called" << std::endl;
	return ;
}