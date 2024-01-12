/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:39:33 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 23:55:11 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class AAnimal
{
	protected:
	std::string	_type;

	public:
	AAnimal(void);
	AAnimal(AAnimal const & rhs);
	virtual ~AAnimal(void);
	AAnimal	&operator=(AAnimal const & rhs);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif