/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:32:55 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 04:43:21 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
	public:
			virtual ~RadScorpion();
			RadScorpion(void);
			RadScorpion(RadScorpion const & enemy);
			RadScorpion&operator=(RadScorpion const & enemy);
			virtual void takeDamage(int);
};

#endif
