/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:01:58 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 18:09:40 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample1.hpp"
#include "sample2.hpp"

int	main(void) {
	Sample1	sample1(42, 'a', 12.45f);
	Sample2	sample2(24, 'z', 45.4f);
	std::cout << "out function:" << std::endl;
	std::cout << "sample1 a1: " << sample1.a1 << std::endl;
	std::cout << "sample1 a2: " << sample1.a2 << std::endl;
	std::cout << "sample1 a3: " << sample1.a3 << std::endl;
	std::cout << "sample2 a1: " << sample2.a1 << std::endl;
	std::cout << "sample2 a2: " << sample2.a2 << std::endl;
	std::cout << "sample2 a3: " << sample2.a3 << std::endl;
	return (0);
}