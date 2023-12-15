/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:07 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:12:48 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog(void);
	Dog(Dog const & rhs);
	~Dog(void);
	Dog &operator=(Dog const & rhs);

	void	makeSound(void) const;
};

#endif