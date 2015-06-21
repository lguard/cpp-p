/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 02:19:59 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 09:50:27 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Missile.hpp"
#include "Game.hpp"
#include <ncurses.h>

Missile::Missile() { }

Missile::~Missile() { }

Missile::Missile(int x, int y) : Entity(1, 2, x, y, L'∆') { }

Missile::Missile(Missile const & missile)
{
	*this = missile;
}

Missile & Missile::operator=(Missile const & missile)
{
	this->_Hp = missile.getHp();
	this->_X = missile.getX();
	this->_Y = missile.getY();
	this->_Velocity = missile.getVelocity();
	this->_Type = missile.getType();
	this->_Alive = missile.isAlive();
	this->_Visible = missile.isVisible();
	return *this;
}

void Missile::update(void)
{
	if (myTurn())
	{
		if (this->_Alive)
		{
			if (this->_Y < 0 || this->_Y >= Game::getHeight() || this->_X < 0 || this->_X >= Game::getWidth())
			{
				this->_Alive = false;
				this->_Visible = false;
			}
			if(!(move(this->_dir)))
			{
				this->_Alive = false;
				this->_Visible = false;
				mvprintw(this->_Y, this->_X, "%C", ' ');
			}
		}
	}
}

void		Missile::setDir(int dir) {this->_dir = dir;}
