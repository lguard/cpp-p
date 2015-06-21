/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:05:35 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 18:05:06 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
class Weapon
{
	public:
		Weapon(std::string type);
		Weapon(void);
		std::string const	&getType(void);
		void				setType(std::string type);
	private:
		std::string			type;
};

#endif
