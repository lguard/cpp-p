/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 02:19:18 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 08:47:52 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_HPP
# define MISSILE_HPP

#include "Entity.hpp"

class Missile : public Entity
{
public:
	virtual ~Missile(void);
	Missile(void);
	Missile(int x, int y);
	Missile(Missile const & missile);
	Missile & operator=(Missile const & missile);
	void update(void);
	void setDir(int dir);
private:
	int		_dir;
};

#endif
