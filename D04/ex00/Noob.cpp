/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noob.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:34:00 by lguarda           #+#    #+#             */
//   Updated: 2015/04/10 15:14:27 by lguarda          ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */


#include "Noob.hpp"

Noob::Noob(void) {}

Noob::~Noob(void)
{
	std::cout << "OMG" << std::endl;
}

Noob::Noob(string name)
{
	this->_Name = name;
	birth();
	std::cout << "MDRLOL" << std::endl;
}

Noob::Noob(Noob const & noob)
{
	this->_Name = noob.getName();
	birth();
	std::cout << "MRDLOL" << std::endl;
}

Noob&		Noob::operator=(Noob const & noob)
{
	*this = noob;
	return *this;
}

string		Noob::getName(void) const
{
	return this->_Name;
}

void	Noob::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into a Badass Dragon !" << std::endl;
}
