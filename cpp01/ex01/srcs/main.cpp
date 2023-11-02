/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:53:20 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/25 22:03:03 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main()
{
	int		N = 18;
	Zombie*	horde = zombieHorde(N, "Foo");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete [] horde;
}
