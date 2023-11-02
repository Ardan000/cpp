/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:49:32 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/25 21:14:58 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
	std::string		login;
public:
	Student(std::string& name) : login(name)
	{
	}
	~Student()
	{
	}
	std::string&	ByRef();
	std::string*	ByPtr();
	void	printLogin();
};

std::string&	Student::ByRef()
{
	return (this->login);	
}

std::string*	Student::ByPtr()
{
	return (&(this->login));
}

void	Student::printLogin()
{
	std::cout << "print login: " << this->login << std::endl;
}

int	main()
{
	std::string name = "stan";

	Student	stud(name);
	std::cout << "ref :" << stud.ByRef() << std::endl;
	std::cout << "ptr :" << *(stud.ByPtr()) << std::endl;
	stud.printLogin();

	stud.ByRef() = "pol";
	std::cout << "new ref :" << stud.ByRef() << std::endl;
	stud.printLogin();

	stud.ByRef() = "theo";
	std::cout << "new ptr :" << *(stud.ByPtr()) << std::endl;
	stud.printLogin();
}
