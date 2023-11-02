/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:59:48 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 17:03:35 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl = 1;
int	f(void)
{
	return (2);
}

namespace Foo {
	int	gl = 3;
	int	f(void) {return 4;}
}

int	main(void)
{
	printf("gl: %d\nf:  %d\n", gl, f());
	printf("Foo::gl: %d\nFoo::f:  %d\n", Foo::gl, Foo::f());
}