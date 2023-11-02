/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:33:34 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/24 01:38:24 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::setContact(	std::string &firstName,
								std::string &lastName,
								std::string &nickName,
								std::string &phoneNumber,
 								std::string &darkestSecret,
								int	index)
{
	if (index == -1)
	{
		swapAllContact();
		index = NB_CONTACT - 1;
	}
	contact[index].addContact(	firstName,
								lastName,
								nickName,
								phoneNumber,
								darkestSecret);
}

int	Phonebook::FindIndex()
{
	for (int i = 0; i < NB_CONTACT; i++)
	{
		if (contact[i].FindIndex() == 1)
			return (i);
	}
	return (-1);
}

void	Phonebook::printLog(int index)
{
	if (contact[index].FindIndex() == 0)
		contact[index].logContact();
	else
		std::cout << "Wrong index !" << std::endl;

}

void	Phonebook::swapAllContact()
{
	for (int i = 0; i < NB_CONTACT - 1; i++)
		contact[i].swapContact(contact[i + 1]);
}

int	Phonebook::printList()
{
	int	i = 0;

	while (contact[i].FindIndex() == 0 && i < NB_CONTACT)
	{
		contact[i].printColumn(i + 1);
		i++;
	}
	if (i == 0)
		std::cout << "No contact register" << std::endl;
	return (i);
}