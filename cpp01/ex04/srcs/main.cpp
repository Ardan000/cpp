/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:13 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/28 16:19:40 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

std::string	replace(std::string &str, std::string const &s1, std::string const &s2)
{
	size_t	pos = 0;

	while ((pos = str.find(s1, pos)) != std::string::npos)
	{
		str.replace(pos, s1.length(), s2);
		pos += s2.length();
		// pos += 1;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	if (argc != 4)
		exit (0);
	std::string		ifsName = argv[1];
	std::string		strReplace = ".replace";
	std::string		ofsName = argv[1] + strReplace;
	std::ifstream	ifs(ifsName.c_str());
	std::ofstream	ofs(ofsName.c_str());
	std::string		buffer;

	while (std::getline(ifs, buffer))
	{
		ofs << replace(buffer, argv[2], argv[3]) << std::endl;
	}
	ifs.close();
	ofs.close();
}

// void replaceAllOccurrences(std::string& input, const std::string& s1, const std::string& s2) {
//     size_t pos = 0;
//     while ((pos = input.find(s1, pos)) != std::string::npos) {
//         input.replace(pos, s1.length(), s2);
//         pos += s2.length();
//     }
// }

// int main() {
//     std::string input = "Ceci est un exemple de remplacement de sous-chaîne. C'est un exemple complet de recherche et de remplacement.";
//     std::string s1 = "exemple";
//     std::string s2 = "remplacement";

//     std::cout << input << std::endl;
    
// 	replaceAllOccurrences(input, s1, s2);

//     std::cout << input << std::endl;

//     return 0;
// }