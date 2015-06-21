/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 20:03:30 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 11:24:22 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP

class Entity
{
public:
	virtual ~Entity(void);
	Entity(void);
	Entity(Entity const & entity);
	Entity(int x, int y);
	Entity(int hp, int velocity, int x, int y, int type);
	Entity&operator=(Entity const & entity);
	virtual void update(void);
	virtual void draw(void);
	int	getHp(void) const;
	int	getType(void) const;
	int	getVelocity(void) const;
	int	getX(void) const;
	int	getY(void) const;
	void setpos(int x, int y);
	void setAll(int x, int y, int hp, int velocity, int type, int color);
	bool isAlive(void) const;
	bool isVisible(void) const;
	bool collide(Entity const & e) const;
	void takeDamage(int value);
	bool move(int dir);
	bool myTurn(void);
protected:
	int		_Hp;
	int		_X;
	int		_Y;
	int		_oldX;
	int		_oldY;
	int		_Velocity;
	int		_CurrentFrame;
	int		_Type;
	int		_Color;
	bool _Alive;
	bool _Visible;
};

#endif
