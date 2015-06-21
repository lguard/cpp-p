/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:57:20 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 04:49:56 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::~PowerFist(void) {}

PowerFist::PowerFist(void)
{
	this->_Name = "Power Fist";
	this->_Dmg = 50;
	this->_ApCost = 8;
}

PowerFist::PowerFist(PowerFist const & weapon)
{
	*this = weapon;
}

PowerFist&	PowerFist::operator=(PowerFist const & weapon)
{
	this->_Name = weapon.getName();
	this->_Dmg = weapon.getDamage();
	this->_ApCost = weapon.getAPCost();
	return *this;
}

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
