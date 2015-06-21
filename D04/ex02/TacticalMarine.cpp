/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 06:13:21 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:33:36 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "TacticalMarine.hpp"

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & marine)
{
	*this = marine;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine&TacticalMarine::operator=(TacticalMarine const & marine)
{
	this->_HP = marine.getHP();
	return *this;;
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}
void	TacticalMarine::rangedAttack() const
{
	std::cout <<"* attacks with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

int		TacticalMarine::getHP() const
{
	return this->_HP;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *ret = new TacticalMarine(*this);
	return ret;
}
