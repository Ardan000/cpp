/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:09 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 20:03:30 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(int i) : _private_foo(i){
	std::cout << "constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "destructor called" << std::endl;
	return ;
}

int	Sample::get_foo(void) const{
	return (this->_private_foo);
}

int	Sample::compare(Sample *other) const{
	if (this->_private_foo < other->_private_foo)
		return (-1);
	if (this->_private_foo > other->_private_foo)
		return (1);
	return (0);
}