/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:15:49 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/24 17:58:04 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "phonebook.hpp"
#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::logContact(void) const
{
	std::cout << "write log:" << std::endl;
	std::cout << "first name: ";
	std::cout << this->_FirstName << std::endl;
	std::cout << "last name: ";
	std::cout << this->_LastName << std::endl;
	std::cout << "nick name: ";
	std::cout << this->_NickName << std::endl;
	std::cout << "phone number: ";
	std::cout << this->_PhoneNumber << std::endl;
	std::cout << "darkest secret: ";
	std::cout << this->_DarkestSecret << std::endl;
}

int	Contact::FindIndex()
{
	if (this->_FirstName == "")
		return (1);
	return (0);
}

void	Contact::addContact(std::string &firstName,
							std::string &lastName,
							std::string &nickName,
							std::string &phoneNumber,
 							std::string &darkestSecret)
{
	this->_FirstName = firstName;
	this->_LastName = lastName;
	this->_NickName = nickName;
	this->_PhoneNumber = phoneNumber;
	this->_DarkestSecret = darkestSecret;
}

void	Contact::swapContact(Contact otherContact)
{
	this->_FirstName = otherContact._FirstName;
	this->_LastName = otherContact._LastName;
	this->_NickName = otherContact._NickName;
	this->_PhoneNumber = otherContact._PhoneNumber;
	this->_DarkestSecret = otherContact._DarkestSecret;
}

void	Contact::printColumn(int index)
{
	long unsigned int	len = 10;

	std::cout << std::right << std::setw(10) << index << "|";
	if (this->_FirstName.length() <= len)
		std::cout << std::right << std::setw(10) << this->_FirstName;
	else
		std::cout << std::right << std::setw(9) << this->_FirstName.substr(0, len - 1) << ".";
	
	std::cout << "|";
	if (this->_LastName.length() <= len)
		std::cout << std::right << std::setw(10) << this->_LastName;
	else
		std::cout << std::right << std::setw(9) << this->_LastName.substr(0, len - 1) << ".";
	
	std::cout << "|";
	if (this->_NickName.length() <= len)
		std::cout << std::right << std::setw(10) << this->_NickName;
	else
		std::cout << std::right << std::setw(9) << this->_NickName.substr(0, len - 1) << ".";
	std::cout << std::endl;


	// std::cout << index;
	// if (this->_FirstName.length() > len)
	// 	std::cout << "|" << this->_FirstName.substr(0, len - 1) << ".";
	// else
	// {
	// 	std::cout << "|";
	// 	for (long unsigned int i = 0; i + this->_FirstName.length() < len; i++)
	// 		std::cout << " ";
	// 	std::cout << this->_FirstName;
	// }

	// if (this->_LastName.length() > len)
	// 	std::cout << "|" << this->_LastName.substr(0, len - 1) << ".";
	// else
	// {
	// 	std::cout << "|";
	// 	for (long unsigned int i = 0; i + this->_LastName.length() < len; i++)
	// 		std::cout << " ";
	// 	std::cout << this->_LastName;
	// }

	// if (this->_NickName.length() > len)
	// 	std::cout << "|" << this->_NickName.substr(0, len - 1) << ".";
	// else
	// {
	// 	std::cout << "|";
	// 	for (long unsigned int i = 0; i + this->_NickName.length() < len; i++)
	// 		std::cout << " ";
	// 	std::cout << this->_NickName;
	// }
	// std::cout << std::endl;
}