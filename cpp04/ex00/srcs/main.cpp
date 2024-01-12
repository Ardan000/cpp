/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:53:54 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 22:16:17 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Right/Animal.hpp"
#include "Right/Dog.hpp"
#include "Right/Cat.hpp"
#include "Wrong/WrongAnimal.hpp"
#include "Wrong/WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wmeta = new WrongAnimal();
const WrongAnimal* wi = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << wi->getType() << " " << std::endl;
j->makeSound();
i->makeSound();
wi->makeSound();
meta->makeSound();
wmeta->makeSound();

delete(meta);
delete(j);
delete(i);
delete(wmeta);
delete(wi);
}