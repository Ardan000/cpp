/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:13:48 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/26 16:36:45 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "phonebook.hpp"
#include "contact.hpp"

int	createIndex(const char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '1' || str[i] > '8' || str[i] == ' ')
			return (-1);
	}
	return (std::atoi(str));
}

std::string	saveString()
{
	std::string	str;

	std::getline(std::cin, str);
	while (str == "")
	{
		if (std::cin.eof())
			exit (1);
		std::cout << "Please write something" << std::endl;
		std::getline(std::cin, str);
	}
	return (str);
}

void	create_contact(Phonebook *phonebook)
{
	std::string	firstName;
	std::cout << "Add first name: ";
	firstName = saveString();

	std::string	lastName;
	std::cout << "Add lastName: ";
	lastName = saveString();

	std::string	nickName;
	std::cout << "Add nickName: ";
	nickName = saveString();

	std::string	phoneNumber;
	std::cout << "Add phoneNumber: ";
	phoneNumber = saveString();
	
	std::string	darkestSecret;
	std::cout << "Add darkestSecret: ";
	darkestSecret = saveString();

	phonebook->setContact(firstName, lastName, nickName, phoneNumber, darkestSecret, phonebook->FindIndex());
}

int	main(void)
{
	std::string	buffer;
	Phonebook	phonebook;
	int	index;

	while (buffer != "EXIT")
	{
		std::cout << "Enter Word" << std::endl;
		std::getline(std::cin, buffer);
		if (buffer == "ADD")
			create_contact(&phonebook);
		else if (buffer == "SEARCH")
		{
			if (phonebook.printList() != 0)
			{
				std::cout << "What index you want ?" << std::endl;
				std::getline(std::cin, buffer);
				index = createIndex(buffer.c_str());
				if (index >= 1 && index <= NB_CONTACT)
					phonebook.printLog(buffer[0] - 49);
				else
					std::cout << "Wrong index !" << std::endl;
			}
		}
		if (std::cin.eof())
			break ;
	}
}