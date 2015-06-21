/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:59:21 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 02:41:20 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::~AWeapon() {}

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _Name(name), _ApCost(apcost), _Dmg(damage)
{}

AWeapon::AWeapon(AWeapon const & weapon)
{
	this->_Name = weapon.getName();
	this->_ApCost = weapon.getAPCost();
	this->_Dmg = weapon.getDamage();
}

std::string		AWeapon::getName() const { return this->_Name; }
int				AWeapon::getAPCost() const { return this->_ApCost; }
int				AWeapon::getDamage() const { return this->_Dmg; }
