/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:09 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 21:13:50 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {
	std::cout << "constructor called" << std::endl;
	Sample::_nb_inst += 1;
	return ;
}

Sample::~Sample(void) {
	std::cout << "destructor called" << std::endl;
	Sample::_nb_inst -= 1;
	return ;
}

int	Sample::get_nb_inst(void){
	return (Sample::_nb_inst);
}

int	Sample::_nb_inst = 0;