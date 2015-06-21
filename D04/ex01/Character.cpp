/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:41:11 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 05:14:46 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(void) {}

Character::Character(void) : _Name("Poney"), _Ap(40), _Weapon(NULL) {}

Character::Character(std::string const & name) : _Name(name), _Ap(40), _Weapon(NULL) {}

Character::Character(Character const & character)
{
	*this = character;
}

Character&		Character::operator=(Character const & character)
{
	this->_Name = character.getName();
	this->_Ap = character.getAP();
	this->_Weapon = character.getWeapon();
	return *this;
}

void		Character::recoverAP()
{
	this->_Ap += 10;
	if (this->_Ap > 40)
		this->_Ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
	this->_Weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
	if (this->_Weapon && enemy)
	{
		if (this->_Ap > this->_Weapon->getAPCost())
		{
			this->_Ap -= this->_Weapon->getAPCost();
			std::cout << this->_Name << " attacks " << enemy->getType()
			<< " with a " << this->_Weapon->getName() << std::endl;
			this->_Weapon->attack();
			enemy->takeDamage(this->_Weapon->getDamage());
		}
	}
}

std::string		Character::getName(void) const {return this->_Name;}
int				Character::getAP(void) const{return this->_Ap;}
AWeapon*		Character::getWeapon(void) const{return this->_Weapon;}

std::ostream&	operator<<(std::ostream&o, Character const & character)
{
	if (character.getWeapon())
		o << character.getName() << " has " << character.getAP()
		<< " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		o << character.getName() << " has " << character.getAP()
		<< " AP and is unarmed" << std::endl;
	return o;
}
