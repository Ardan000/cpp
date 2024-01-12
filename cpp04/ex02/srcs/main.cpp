/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:20:01 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 23:55:45 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>


int	main()
{
	{
	const AAnimal *Ani[6];

	for(int i = 0; i < 6; i += 2)
	{
		Ani[i] = new Cat();
		Ani[i + 1] = new Dog();
	}

	Ani[0]->makeSound();
	Ani[1]->makeSound();
	for(int i = 0; i < 6; i++)
	{
		delete(Ani[i]);
	}
	}
	std::cout << "----------------------------------------------------" << std::endl;
	{
	Cat cat;
	
	cat.setIdea("manger", 0);
	std::cout << cat.getIdea(0) << std::endl;
	std::cout << cat.getIdea(1) << std::endl;

	Cat	cat1(cat);

	std::cout << cat1.getIdea(0) << std::endl;
	std::cout << cat1.getIdea(1) << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	{
	Cat	test;
	{
		Cat	scope;

		scope.setIdea("new", 0);
		test = scope;
	}
	std::cout << test.getIdea(0) << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	{
	Cat	*cat3 = new Cat;
	cat3->setIdea("manger", 0);

	Cat *cat4 = new Cat(*cat3);
	std::cout << cat3->getIdea(0) << std::endl;
	std::cout << cat4->getIdea(0) << std::endl;
	delete(cat3);
	std::cout << cat4->getIdea(0) << std::endl;
	delete(cat4);
	}
	return 0;
}