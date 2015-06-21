/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 10:32:25 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 11:12:47 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::killpony(void)
{
	this->life = 0;
	std::cout << this->name << " is dead" << std::endl;
}

Pony::Pony(std::string nom) : name(nom)
{
	this->life = 100;
	std::cout << "New Pony Created ->life : " << this->life << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->name << " Destroy ->life:" << this->life << std::endl;
}
