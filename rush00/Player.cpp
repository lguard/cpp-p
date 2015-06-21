/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 22:02:51 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 12:24:05 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Game.hpp"

Player::~Player()
{
	delete [] this->missiles;
}

Player::Player()
{
	this->missiles = new Missile[NBM];
}

Player::Player(int x, int y) : Entity::Entity(x, y)
{
	this->_Hp = 10;
	this->_Velocity = 1;
	this->_Type = 'A';
	this->missiles = new Missile[NBM];
}

Player::Player(Player const & player)
{
	*this = player;
	this->missiles = new Missile[NBM];
}

Player& Player::operator=(Player const & player)
{
	this->_Hp = player.getHp();
	this->_X = player.getX();
	this->_Y = player.getY();
	this->_Velocity = player.getVelocity();
	this->_Type = player.getType();
	return *this;
}

Missile*		Player::getMissiles() const
{
	return this->missiles;
}

Missile*		Player::getDeadMissile() const
{
	int		i = 0;

	while (i < NBM)
	{
		if (!(this->missiles[i].isAlive()))
			return &this->missiles[i];
		i++;
	}
	return NULL;
}


void			Player::update(void)
{
	Missile		*aMissile;

	if (myTurn())
	{
		if(Game::key == LEFT) { this->_Type = '<'; move(DIR_LEFT); }
		if(Game::key == RIGHT) { this->_Type = '>'; move(DIR_RIGHT); }
		if(Game::key == UP) { this->_Type = '^'; move(DIR_UP); }
		if(Game::key == DOWN) { this->_Type = 'v'; move(DIR_DOWN); }
		Entity::update();
	}
	if (Game::key == SHOOT)
	{
		aMissile = getDeadMissile();
		if (aMissile)
		{
			if (this->_Type == '^')
				aMissile->setAll(this->_X, (this->_Y - 1), 10, 230, '|', 4),
				aMissile->setDir(DIR_UP);
			if (this->_Type == '>')
				aMissile->setAll((this->_X + 1), this->_Y, 10, 230, '-', 4),
				aMissile->setDir(DIR_RIGHT);
			if (this->_Type == '<')
				aMissile->setAll((this->_X - 1), this->_Y, 10, 230, '-', 4),
				aMissile->setDir(DIR_LEFT);
			if (this->_Type == 'v')
				aMissile->setAll(this->_X, (this->_Y + 1), 10, 230, '|', 4),
				aMissile->setDir(DIR_DOWN);
		}
	}
	for (int i = 0; i < NBM; i++)
		this->missiles[i].update();
}

void	Player::draw(void)
{
	for (int i = 0; i < NBM; i++)
		this->missiles[i].draw();
	Entity::draw();
}
