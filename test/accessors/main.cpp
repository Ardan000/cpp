/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:23:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 19:48:50 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

int	main(void) {
	Sample instance;

	std::cout << instance.get_foo() << std::endl;
	instance.set_foo(45);
	std::cout << instance.get_foo() << std::endl;
	instance.set_foo(87);
	std::cout << instance.get_foo() << std::endl;
	instance.set_foo(0);
	std::cout << instance.get_foo() << std::endl;
}