/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 05:42:46 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:42:26 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : unitCount(0) {}

Squad::~Squad(void)
{
	int		i = 0;

	while(i < this->unitCount)
	{
		delete pool[i];
		i++;
	}
}

Squad::Squad(ISquad const & squad)
{
	*this = squad;
}

ISquad&	Squad::operator=(ISquad const & squad)
{
	int		i = 0;

	while(i < this->unitCount)
	{
		delete pool[i];
		i++;
	}
	this->unitCount = squad.getCount();
	i = 0;
	while(i < this->unitCount)
	{
		pool[i] = squad.getUnit(i)->clone();
		i++;
	}
	return *this;
}

int		Squad::getCount() const {return this->unitCount;}

ISpaceMarine*	Squad::getUnit(int i) const
{
	if (i >= 0 && i < this->unitCount)
		return this->pool[i];
	return NULL;
}

int			Squad::push(ISpaceMarine* marine)
{
	if (this->unitCount < 50)
	{
		this->pool[unitCount] = marine;
		this->unitCount++;
		return 0;
	}
	else
		return 1;
}
