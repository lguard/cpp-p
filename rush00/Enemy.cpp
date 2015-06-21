/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 21:37:26 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 09:47:34 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::~Enemy()
{
	delete [] this->missiles;
}

Enemy::Enemy() : _dir(0)
{
	this->missiles = new Missile[NBM];
}

Enemy::Enemy(int x, int y) : Entity::Entity(x, y)
{
	this->_Hp = 10;
	this->_Velocity = 1;
	this->_Type = 'o';
	this->missiles = new Missile[NBM];
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;
	this->missiles = new Missile[NBM];
}

Enemy & Enemy::operator=(Enemy const & enemy)
{
	this->_Hp = enemy.getHp();
	this->_X = enemy.getX();
	this->_Y = enemy.getY();
	this->_Velocity = enemy.getVelocity();
	this->_Type = enemy.getType();
	return *this;
}

Missile*		Enemy::getMissiles() const
{
	return this->missiles;
}

void Enemy::update(void)
{
	if (myTurn() && this->_Alive)
	{
		int r = std::rand() % 12;
		if (r <= 3)	this->_dir = r;
			move(this->_dir);
	}
}
