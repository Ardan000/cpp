/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:33:27 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 15:25:17 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap bougie("bougie");

	for (int i = 0; i < 15; i++)
	{

	bougie.attack("bob");
	bougie.takeDamage(5);
	bougie.beRepaired(5);
	std::cout << std::endl;
	}
}