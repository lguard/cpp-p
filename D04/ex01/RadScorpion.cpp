/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:31:59 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 05:10:32 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::~RadScorpion(void) {}

RadScorpion::RadScorpion(void) : Enemy::Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & enemy)
{
	*this = enemy;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const & enemy)
{
	this->_Hp = enemy.getHP();
	this->_Type = enemy.getType();
	return *this;
}

void			RadScorpion::takeDamage(int dmg)
{
	if (this->_Hp)
	{
		this->_Hp -= dmg;
		if (this->_Hp <= 0)
			std::cout << "* SPROTCH *" << std::endl, this->_Hp = 0;
	}
}
