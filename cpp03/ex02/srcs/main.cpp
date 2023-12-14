/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:33:27 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:21:44 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap boulanger("bout en train");
	for (int i = 0; i < 500; i++)
	{

	boulanger.attack("bob");
	boulanger.takeDamage(5);
	boulanger.beRepaired(5);
	}
}