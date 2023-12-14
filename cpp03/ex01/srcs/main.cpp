/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:33:27 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 15:53:24 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap boulanger("boulanger");
	boulanger.attack("bob");
	boulanger.takeDamage(5);
	boulanger.beRepaired(5);
	boulanger.guardGate();
}