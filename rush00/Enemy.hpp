/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 21:38:40 by lguarda           #+#    #+#             */
//   Updated: 2015/04/12 07:35:00 by ntibi            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Entity.hpp"
#include "Missile.hpp"
#include "Defines.hpp"

class Enemy : public Entity
{
public:
	virtual ~Enemy(void);
	Enemy(void);
	Enemy(Enemy const & enemy);
	Enemy(int x, int y);
	Enemy&operator=(Enemy const & enemy);
	Missile*	getMissiles() const;
	void update(void);
private:
	Missile		*missiles;
	int _dir;
};

#endif
