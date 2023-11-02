/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:20:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:21 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl()
{
}

Harl::~Harl()
{
}

// void	Harl::debug(void){
// 	std::cout << "debug" << std::endl;
// }

// void	Harl::info(void){
// 	std::cout << "info" << std::endl;
// }

// void	Harl::warning(void){
// 	std::cout << "warning" << std::endl;
// }

// void	Harl::error(void){
// 	std::cout << "error" << std::endl;
// }

void	Harl::complain(std::string level)
{
	Harl::func_ptr	func_ptr[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	std::string		func_name[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (size_t i = 0; i < ELEM_COUNT(func_ptr); i++)
	{
		if (func_name[i] == level)
			(this->*func_ptr[i])(); 
	}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}