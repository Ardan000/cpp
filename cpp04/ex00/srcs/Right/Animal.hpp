/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:39:33 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 22:07:03 by sfaugere         ###   ########.fr       */
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
	virtual ~Animal(void);
	Animal	&operator=(Animal const & rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif