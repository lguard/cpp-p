/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 11:08:05 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:22:53 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) { }

Victim::~Victim(void) { death();}

Victim::Victim(string name)
{

	this->_Name = name;
	birth();
}

Victim::Victim(Victim const & victim)
{
	this->_Name = victim.getName();
	birth();
}

Victim&		Victim::operator=(Victim const & victim)
{
	*this = victim;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Victim const & victim)
{
	o << "I'm " << victim.getName() << " and I like otters !" << std::endl;
	return o;
}

string		Victim::getName(void) const
{
	return this->_Name;
}

void		Victim::birth(void)
{
	std::cout << "Some random victim called " << this->_Name << " just popped !"
	<< std::endl;
}

void		Victim::death(void)
{
	std::cout << "Victim " << this->_Name << " just died for no apparent reason !"
	<< std::endl;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_Name << " has been turned into a cute little sheep !" << std::endl;
}
