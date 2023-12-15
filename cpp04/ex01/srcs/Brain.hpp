/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:35:16 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/15 16:36:48 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	public:
	Brain(void);
	Brain(Brain const & rhs);
	~Brain(void);
	Brain operator=(Brain const & rhs);
};

#endif