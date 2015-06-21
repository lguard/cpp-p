/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 18:59:05 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:34:45 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & marine)
{
	*this = marine;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator&AssaultTerminator::operator=(AssaultTerminator const & marine)
{
	this->_HP = marine.getHP();
	return *this;;
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void	AssaultTerminator::rangedAttack() const
{
	std::cout <<"* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

int		AssaultTerminator::getHP() const
{
	return this->_HP;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *ret = new AssaultTerminator(*this);
	return ret;
}
