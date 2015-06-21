/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:18:10 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 13:48:09 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->m_type << " " << this->m_name << " braiinnnnnnnnsss" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->m_name = name;
}

void	Zombie::set_type(std::string type)
{
	this->m_type = type;
}

std::string	Zombie::get_name(void)
{
	return (this->m_name);
}

std::string	Zombie::get_type(void)
{
	return (this->m_type);
}

Zombie::Zombie(void)
{
	std::cout << "Born Zombie Born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Burn Zombie Burn" << std::endl;
}
