/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:50:52 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 02:55:14 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
class AWeapon
{
	public:
			virtual ~AWeapon(void);
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon(AWeapon const & weapon);
			AWeapon &operator=(AWeapon const & weapon);
			std::string	getName(void) const;
			int				getAPCost(void) const;
			int				getDamage(void) const;
			virtual void	attack(void) const = 0;
	protected:
			AWeapon(void);
			std::string			_Name;
			int					_ApCost;
			int					_Dmg;
};

#endif
