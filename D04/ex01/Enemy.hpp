/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 02:53:07 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 05:14:49 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

class Enemy
{
	public:
			virtual ~Enemy();
			Enemy(int hp, std::string const & type);
			Enemy(void);
			Enemy(Enemy const & enemy);
			Enemy&operator=(Enemy const & enemy);
			std::string getType() const;
			int getHP() const;
			virtual void takeDamage(int);
	protected:
			int				_Hp;
			std::string		_Type;
};

#endif
