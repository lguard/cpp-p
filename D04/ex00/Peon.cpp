/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 11:43:41 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:24:09 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Peon.hpp"

Peon::Peon(void) {}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(string name)
{
	this->_Name = name;
	birth();
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & peon)
{
	this->_Name = peon.getName();
	birth();
	std::cout << "Zog zog." << std::endl;
}

Peon&		Peon::operator=(Peon const & peon)
{
	*this = peon;
	return *this;
}

string		Peon::getName(void) const
{
	return this->_Name;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into a pink pony !" << std::endl;
}
