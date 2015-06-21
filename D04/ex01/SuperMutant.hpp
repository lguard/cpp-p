/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:16:10 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 03:21:31 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
	public:
			virtual ~SuperMutant();
			SuperMutant(void);
			SuperMutant(SuperMutant const & enemy);
			SuperMutant&operator=(SuperMutant const & enemy);
			virtual void takeDamage(int);
};

#endif
