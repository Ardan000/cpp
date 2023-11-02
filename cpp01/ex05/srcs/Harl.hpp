/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:20:36 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:04 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# define ELEM_COUNT(x) (sizeof(x) / sizeof(x[0]))

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	typedef void    (Harl::*func_ptr) (void);
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif