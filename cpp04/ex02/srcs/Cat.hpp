/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:07 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/13 00:45:09 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public AAnimal
{
public:
	Cat(void);
	Cat(Cat const & rhs);
	virtual ~Cat(void);
	Cat &operator=(Cat const & rhs);

	virtual void	makeSound(void) const;
	void			setIdea(std::string idea, int index);
	std::string		getIdea(int index) const;

private:
	Brain *_ideas;
};

#endif