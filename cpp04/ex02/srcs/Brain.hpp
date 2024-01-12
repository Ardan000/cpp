/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:23:39 by sfaugere          #+#    #+#             */
/*   Updated: 2024/01/12 22:39:11 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
	Brain(void);
	Brain(Brain const & rhs);
	~Brain(void);
	Brain		&operator=(Brain const & rhs);
	void		setIdea(std::string idea, int index);
	std::string	getIdea(int index);

	private:
	std::string	ideas[100];
};

#endif