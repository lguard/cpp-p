/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 22:01:27 by lguarda           #+#    #+#             */
//   Updated: 2015/04/12 10:42:40 by ntibi            ###   ########.fr       //
//   Updated: 2015/04/11 23:59:58 by ntibi            ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "Entity.hpp"
#include "Missile.hpp"
#include "Defines.hpp"

class Player : public Entity
{
public:
	virtual ~Player(void);
	Player(void);
	Player(Player const & player);
	Player(int x, int y);
	Player&operator=(Player const & player);
	Missile*	getMissiles() const;
	Missile*	getDeadMissile() const;
	virtual void		update(void);
	virtual void		draw(void);
private:
	Missile		*missiles;
};

#endif
