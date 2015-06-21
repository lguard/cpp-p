/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 20:03:32 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 11:38:11 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Entity.hpp"
#include "Game.hpp"
#include <ncurses.h>

Entity::~Entity(void) {}

Entity::Entity(void) : _Hp(100), _X(0), _Y(0), _oldX(0), _oldY(0), _Velocity(1), _Type('x'), _Alive(false) {}

Entity::Entity(int x, int y) : _Hp(0), _X(x), _Y(y), _oldX(x), _oldY(y), _Velocity(1), _Type('x'), _Alive(false) {}

Entity::Entity(int hp, int velocity, int x, int y, int type) : _Hp(hp), _X(x), _Y(y), _oldX(x), _oldY(y), _Velocity(velocity), _Type(type), _Alive(true) {}

Entity::Entity(Entity const & entity)
{
	*this = entity;
}

Entity & Entity::operator=(Entity const & entity)
{
	this->_Hp = entity.getHp();
	this->_X = entity.getX();
	this->_Y = entity.getY();
	this->_Velocity = entity.getVelocity();
	this->_Type = entity.getType();
	this->_Alive = entity.isAlive();
	return *this;
}

int	Entity::getHp(void) const {return this->_Hp;}
int	Entity::getType(void) const {return this->_Type;}
int	Entity::getVelocity(void) const {return this->_Velocity;}
int	Entity::getX(void) const {return this->_X;}
int	Entity::getY(void) const {return this->_Y;}
bool Entity::isAlive(void) const { return (this->_Alive); }
bool Entity::isVisible(void) const { return (this->_Visible); }

void Entity::draw(void)
{
	if (this->_Alive && this->_CurrentFrame == this->_Velocity - 1)
	{
		attron(COLOR_PAIR(5));
		mvprintw(this->_oldY, this->_oldX, "%C", ' ');
		this->_oldX = this->_X;
		this->_oldY = this->_Y;
		attron(COLOR_PAIR(this->_Color));
		mvprintw(this->_Y, this->_X, "%C", this->_Type);
	}
}

void Entity::update()
{
	if (this->_Hp <= 0 && this->_Alive)
	{
		this->_Hp = 0;
		this->_Alive = false;
	}
}

bool Entity::collide(Entity const & e) const
{
	if (this->_Alive && this->_Visible && e.isAlive() && e.isVisible() && this->_X == e.getX() && this->_Y == e.getY())
		return (true);
	return (false);
}

void Entity::takeDamage(int value)
{
	this->_Hp -= value;
	if (this->_Hp <= 0)
	{
		this->_Alive = false;
		this->_Visible = false;
		this->_Hp = 0;
	}
}

bool Entity::move(int dir)
{
	if (dir == DIR_DOWN && this->_Y < Game::getHeight() - 1)
		this->_Y++;
	else if (dir == DIR_UP && this->_Y > 0)
		this->_Y--;
	else if (dir == DIR_RIGHT && this->_X < Game::getWidth() - 1)
		this->_X++;
	else if (dir == DIR_LEFT && this->_X > 0)
		this->_X--;
	else
		return (false);
	return (true);
}

void	Entity::setpos(int x, int y)
{
	this->_X = x;
	this->_Y = y;
}

void	Entity::setAll(int x, int y, int hp, int velocity, int type, int color)
{
	this->_X = x;
	this->_Y = y;
	this->_Hp = hp;
	this->_Velocity = velocity;
	this->_Type = type;
	this->_Alive = true;
	this->_Visible = true;
	this->_CurrentFrame = 0;
	this->_Color = color;
}

bool Entity::myTurn(void)
{
	if (this->_CurrentFrame <= 0)
	{
		this->_CurrentFrame = this->_Velocity - 1;
		return (true);
	}
	this->_CurrentFrame--;
	return (false);
}
