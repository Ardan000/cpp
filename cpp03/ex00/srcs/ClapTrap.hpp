/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:45:07 by sfaugere          #+#    #+#             */
/*   Updated: 2023/12/13 21:22:38 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &rhs);
	ClapTrap	&operator=(ClapTrap const & rhs);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amout);
	void	beRepaired(unsigned int amout);

	private:
	std::string	_name;
	int 		_hitPoint;
	int			_energyPoints;
	int			_attackDamage;

};

#endif