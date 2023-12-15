/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:53:54 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:34:33 by sfaugere         ###   ########.fr       */
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
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
...
return 0;
}