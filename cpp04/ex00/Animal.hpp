/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:39:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:46:42 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
	std::string	_type;

	public:
	Animal(void);
	Animal(Animal const & rhs);
	~Animal(void);
	Animal	&operator=(Animal const & rhs);

	void	makeSound(void);
	std::string	getType(void);
};

#endif