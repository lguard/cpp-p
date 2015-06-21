/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:18:04 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 05:08:25 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::~SuperMutant(void) {}

SuperMutant::SuperMutant(void) : Enemy::Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & enemy)
{
	*this = enemy;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant&	SuperMutant::operator=(SuperMutant const & enemy)
{
	this->_Hp = enemy.getHP();
	this->_Type = enemy.getType();
	return *this;
}

void			SuperMutant::takeDamage(int dmg)
{
	if (this->_Hp)
	{
		this->_Hp -= (dmg - 3);
		if (this->_Hp <= 0)
			std::cout << "Aaargh ..." << std::endl, this->_Hp = 0;
	}
}
