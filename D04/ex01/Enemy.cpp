/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:04:29 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 03:31:07 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::~Enemy(void) {}
Enemy::Enemy(int hp, std::string const & type) : _Hp(hp), _Type(type) {}
Enemy::Enemy(void) : _Hp(0), _Type("Enemy") {}
Enemy&	Enemy::operator=(Enemy const & enemy)
{
	this->_Hp = enemy.getHP();
	this->_Type = enemy.getType();
	return *this;
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
}

std::string		Enemy::getType() const { return this->_Type; }
int				Enemy::getHP() const { return this->_Hp; }

void			Enemy::takeDamage(int dmg)
{
	if (this->_Hp)
	{
		this->_Hp -= dmg;
		if (this->_Hp <= 0)
			std::cout << this->_Type << " died" << std::endl;
	}
}
