/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:18:07 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 13:49:07 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	ZombieEvent::m_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z = new Zombie;
	z->set_type(ZombieEvent::m_type);
	z->set_name(name);
	z->announce();
	return z;
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string rad = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string name = "__________";
	std::srand(std::time(0));
	Zombie	*z = new Zombie;
	z->set_type(ZombieEvent::m_type);
	for (int i = 0; i < 10; i++)
	{
		name[i] = rad[std::rand() % 61];
	}
	z->set_name(name);
	z->announce();
	return z;
}
std::string		ZombieEvent::m_type = "goule";
