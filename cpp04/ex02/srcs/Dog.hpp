/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:27:45 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 23:53:05 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
public:
	Dog(void);
	Dog(Dog const & rhs);
	virtual ~Dog(void);
	Dog &operator=(Dog const & rhs);

	virtual void	makeSound(void) const;
	void			setIdea(std::string idea, int index);
	std::string		getIdea(int index) const;

private:
	Brain *_ideas;
};

#endif