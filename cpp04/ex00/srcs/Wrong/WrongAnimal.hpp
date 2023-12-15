/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:39:33 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:04:29 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
	std::string	_type;

	public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & rhs);
	~WrongAnimal(void);
	WrongAnimal	&operator=(WrongAnimal const & rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif