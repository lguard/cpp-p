/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:39:59 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 16:14:27 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#define NU "0123456789ABCDEF"

Brain::Brain(void)
{
	std::string		str = "";
	long			addr = (long)this;
	
	while(addr > 0)
	{
		str = NU[(addr % 16)] + str;
		addr /= 16;
	}
	str = "0x" + str;
	this->addr = str;
}

std::string		Brain::identify(void) const
{
	return this->addr;
}
