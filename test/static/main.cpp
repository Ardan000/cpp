/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:23:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 21:04:18 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

void	f1(void) {
	Sample	instance;
	
	std::cout << "nb_inst: " << Sample::get_nb_inst() << std::endl;

}

void	f0(void) {
	Sample	instance;

	std::cout << "nb_inst: " << Sample::get_nb_inst() << std::endl;
	f1();
}

int	main(void) {

	std::cout << "nb_inst: " << Sample::get_nb_inst() << std::endl;
	f0();
	std::cout << "nb_inst: " << Sample::get_nb_inst() << std::endl;

}