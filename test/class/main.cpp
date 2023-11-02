/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:25:38 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 17:35:51 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

int	main(void) {
	Sample	instance;

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.bar();
	return 0;
}