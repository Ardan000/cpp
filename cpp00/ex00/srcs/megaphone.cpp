/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:24:19 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/21 14:38:20 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char	*ToUpperString(char *str) {

	int	i = 0;

	while (str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int	main (int argc, char **argv) {
	
	int	i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		while (i < argc) {
			std::cout << ToUpperString(argv[i]) << " ";
			i++;
		}
		std::cout << std::endl;
	}
}
