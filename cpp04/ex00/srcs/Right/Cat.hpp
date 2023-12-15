/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:07 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:12:43 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat(void);
	Cat(Cat const & rhs);
	~Cat(void);
	Cat &operator=(Cat const & rhs);

	void	makeSound(void) const;
};

#endif