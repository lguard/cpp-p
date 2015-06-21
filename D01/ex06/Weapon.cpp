/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 17:08:52 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 18:05:05 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{}

Weapon::Weapon(void)
{
	this->type = "";
}

std::string		const &Weapon::getType(void)
{
	return this->type;
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}
