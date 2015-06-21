/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 03:37:03 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 04:36:10 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include <iostream>


class Character
{
	public:
		~Character(void);
		Character(void);
		Character(Character const & character);
		Character(std::string const & name);
		Character&operator=(Character const & character);
		void			recoverAP();
		void			equip(AWeapon*);
		void			attack(Enemy*);
		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon*		getWeapon(void) const;
	private:
		std::string		_Name;
		int				_Ap;
		AWeapon			*_Weapon;
};

std::ostream&	operator<<(std::ostream&o, Character const & character);

#endif
