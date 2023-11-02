/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:09 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 19:47:32 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {
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

void	Sample::set_foo(int i) {
	if (i != 87)
		this->_private_foo = i;
}