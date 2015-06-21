/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:49:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 04:49:58 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle::PlasmaRifle(void)
{
	this->_Name = "Plasma Rifle";
	this->_Dmg = 21;
	this->_ApCost = 5;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & weapon)
{
	*this = weapon;
}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const & weapon)
{
	this->_Name = weapon.getName();
	this->_Dmg = weapon.getDamage();
	this->_ApCost = weapon.getAPCost();
	return *this;
}

void		PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
