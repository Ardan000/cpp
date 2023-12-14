/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:56 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 16:19:26 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
	public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);
	FragTrap	&operator=(FragTrap const & rhs);

	void	attack(const std::string& target);
	void	highFiveGuys(void);
};

#endif