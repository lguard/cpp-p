/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:47:30 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 04:43:19 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
			virtual ~PlasmaRifle(void);
			PlasmaRifle(void);
			PlasmaRifle(PlasmaRifle const & weapon);
			PlasmaRifle&operator=(PlasmaRifle const & weapon);
			virtual void	attack() const;
};

#endif
