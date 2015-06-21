/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 15:56:14 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 02:50:32 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
	public:
			~PowerFist(void);
			PowerFist(void);
			PowerFist(PowerFist const & weapon);
			PowerFist&operator=(PowerFist const & weapon);
			virtual void	attack() const;
};

#endif
