/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:39:50 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/25 21:49:40 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int	main()
{
	Zombie	*Zombie1 = newZombie("Foo");
	Zombie1->announce();
	delete Zombie1;

	randomChump("Boo");
}