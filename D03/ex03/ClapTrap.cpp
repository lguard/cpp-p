/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 10:24:11 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 19:02:29 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void)
{
	std::cout << "copier coller" << std::endl;
}

ClapTrap::ClapTrap(void) : Name("ClapTrap"), HitPoints(100),
MaxHitPoints(100), EnergyPoints(100), MaxEnergyPoints(100), Level(5),
MeleeAttackDamage(50), RangedAttackDamage(50), ArmorDamageReduction(20)
{
	std::cout << "untz untz wub wub wub" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(100),
MaxHitPoints(100), EnergyPoints(100), MaxEnergyPoints(100), Level(1),
MeleeAttackDamage(30), RangedAttackDamage(20), ArmorDamageReduction(5)
{
	std::cout << "untz untz wub wub wub" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ft)
{
	*this = ft;
	std::cout << "untz untz wub wub wub" << std::endl;
}

std::string		ClapTrap::getName(void) const
{
	return this->Name;
}

unsigned int		ClapTrap::getHitPoints(void) const
{
	return this->HitPoints;
}

unsigned int		ClapTrap::getMaxHitPoints(void) const
{
	return this->MaxHitPoints;
}

unsigned int		ClapTrap::getEnergyPoints(void) const
{
	return this->EnergyPoints;
}

unsigned int		ClapTrap::getMaxEnergyPoints(void) const
{
	return this->MaxEnergyPoints;
}

unsigned int		ClapTrap::getLevel(void) const
{
	return this->Level;
}

unsigned int		ClapTrap::getMeleeAttackDamage(void) const
{
	return this->MeleeAttackDamage;
}

unsigned int		ClapTrap::getRangedAttackDamage(void) const
{
	return this->RangedAttackDamage;
}

unsigned int		ClapTrap::getArmorDamageReduction(void) const
{
	return this->ArmorDamageReduction;
}

void				ClapTrap::setHitPoint(unsigned int ht)
{
	this->HitPoints = ht;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &ft)
{
	this->Name = ft.getName();
	this->HitPoints = ft.getHitPoints();
	this->MaxHitPoints = ft.getMaxHitPoints();
	this->EnergyPoints = ft.getEnergyPoints();
	this->MaxEnergyPoints = ft.getMaxEnergyPoints();
	this->Level = ft.getLevel();
	this->MeleeAttackDamage = ft.getMeleeAttackDamage();
	this->RangedAttackDamage = ft.getRangedAttackDamage();
	this->ArmorDamageReduction = ft.getArmorDamageReduction();
	return *this;
}

unsigned int	ClapTrap::rangedAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " attacks "<< target  << " at range, causing " << this->RangedAttackDamage
		<< " points of damage !" << std::endl;
		return this->RangedAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

unsigned int	ClapTrap::meleeAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " attacks "<< target  << " with his head, causing " << this->MeleeAttackDamage
		<< " points of damage !" << std::endl;
		return this->MeleeAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " Take " << amount << " damage " << " reduced by "
		<< this->ArmorDamageReduction << " ";
		if ((amount - this->ArmorDamageReduction ) > this->HitPoints)
			this->HitPoints = 0, std::cout << " " << this->Name << " is Dead" << std::endl;
		else
			this->HitPoints -= (amount - this->ArmorDamageReduction);
		std::cout << "left with " << this->HitPoints << " HitPoints" << std::endl;
	}
	else
		std::cout << this->Name << " is still : Dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{

	if (this->HitPoints)
	{
		std::cout << this->Name << " heal by " << amount << " from " << this-> HitPoints;
		if (this->HitPoints + amount > this->MaxHitPoints)
			this->HitPoints = this->MaxHitPoints, std::cout << " " << this->Name << " is full heal" << std::endl;
		else
			this->HitPoints += amount, std::cout << " to " << this->HitPoints
			<< std::endl;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
}

void	ClapTrap::repos(void)
{
	if (this->HitPoints)
	{
		if (this->EnergyPoints + 10 > this->MaxEnergyPoints)
			this->EnergyPoints = this->MaxEnergyPoints, std::cout << this->Name
		<< " his full filed of energy";
		else
			this->EnergyPoints += 10, std::cout << this->Name << " restore 10 energy";
		std::cout << std::endl;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
}
