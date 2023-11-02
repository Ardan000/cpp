/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_stream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:06:08 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 17:13:03 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buffer[1024];

	std::cout << "Hello World !" << std::endl;

	std::cout << "j'ecrit: ";
	std::cin >> buffer;
	std::cout << "je recupere: " << buffer;
}