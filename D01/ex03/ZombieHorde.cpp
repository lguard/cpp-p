/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:56:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 14:26:42 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int nZombie) : m_nbZombie(nZombie)
{
	int		i;

	i = 0;
	this->tabz = new Zombie[nZombie];
	while (i < nZombie)
	{
		this->randomZ(&tabz[i]);
		i++;
	}
	std::cout << "new horde raised" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->tabz;
	std::cout << "Rick Grimes kill all the Zombie" << std::endl;
}

void	ZombieHorde::randomZ(Zombie *z)
{
	std::string rad = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string name = "__________";
	z->set_type("randHorde");
	for (int i = 0; i < 10; i++)
	{
		name[i] = rad[std::rand() % 61];
	}
	z->set_name(name);
}

void	ZombieHorde::announce(void)
{
	int		i;

	i = 0;
	while (i < this->m_nbZombie)
	{
		this->tabz[i].announce();
		i++;
	}
}
