/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:33:32 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/24 00:58:23 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

# define NB_CONTACT 8

class Phonebook
{

public:
	Phonebook(void);
	~Phonebook(void);

	void	setContact(	std::string &firstName,
						std::string &lastName,
						std::string &nickName,
						std::string &phoneNumber,
 						std::string &darkestSecret,
						int	index);
	int		FindIndex();
	void	printLog(int index);
	void	swapAllContact();
	int		printList();
private:
	Contact	contact[NB_CONTACT];
};

#endif