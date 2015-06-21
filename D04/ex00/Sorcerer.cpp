/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 10:49:52 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:23:32 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {}

Sorcerer::~Sorcerer(void)
{
	death();
}

Sorcerer::Sorcerer(string name, string title) : _Name(name), _Title(title)
{
	birth();
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer)
{
	this->_Name = sorcerer.getName();
	this->_Title = sorcerer.getTitle();
	birth();
}

Sorcerer&		Sorcerer::operator=(Sorcerer const & sorcerer)
{
	*this = sorcerer;
	return *this;
}

void		Sorcerer::birth(void)
{
	std::cout << this->_Name << ", " << this->_Title << ", is born !" << std::endl;
}

void		Sorcerer::death(void)
{
	std::cout << this->_Name << ", " << this->_Title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const & sorcerer)
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
	<< ", and I like ponies !" << std::endl;
	return o;
}

string		Sorcerer::getName(void) const
{
	return this->_Name;
}

string		Sorcerer::getTitle(void) const
{
	return this->_Title;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
