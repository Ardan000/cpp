/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:04:01 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/14 15:54:13 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap(void);
	ScavTrap	&operator=(ScavTrap const & rhs);

	void	attack(const std::string& target);
	void	guardGate(void);
};

#endif