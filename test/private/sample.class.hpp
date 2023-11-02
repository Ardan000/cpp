/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <sfaugere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:15:55 by sfaugere          #+#    #+#             */
/*   Updated: 2023/10/15 19:25:40 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	int	public_foo = 42;

	Sample(void);
	~Sample(void);

	void	public_bar(void) const;

private:

	int		_private_foo = 24;

	void	_private_bar(void) const;
	
};

#endif
