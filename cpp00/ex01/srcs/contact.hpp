/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:15:46 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/21 15:53:28 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:

	Contact(void);
	~Contact(void);

	void	logContact(void) const;
	int		FindIndex();
	void	addContact(	std::string &firstName,
						std::string &lastName,
						std::string &nickName,
						std::string &phoneNumber,
 						std::string &darkestSecret);
	void	swapContact(Contact otherContact);
	void	printColumn(int index);

	private:

	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;
};

#endif