/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 10:24:11 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 18:08:06 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void)
{
	std::cout << "I can see... the code" << std::endl;
}

FragTrap::FragTrap(void) : Name("FR4G-TP"), HitPoints(100),
MaxHitPoints(100), EnergyPoints(100), MaxEnergyPoints(100), Level(1),
MeleeAttackDamage(30), RangedAttackDamage(20), ArmorDamageReduction(5)
{
	std::cout << "Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down." << std::endl;
	std::cout << "CL4P-TP " << this->Name << " LVL" << this->Level << "has spwan" << std::endl;
}

FragTrap::FragTrap(std::string name) : Name(name), HitPoints(100),
MaxHitPoints(100), EnergyPoints(100), MaxEnergyPoints(100), Level(1),
MeleeAttackDamage(30), RangedAttackDamage(20), ArmorDamageReduction(5)
{
	std::cout << "Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down." << std::endl;
	std::cout << "CL4P-TP " << this->Name << " LVL" << this->Level << "has spwan" << std::endl;
}

FragTrap::FragTrap(FragTrap const & ft)
{
	*this = ft;
	std::cout << "Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down." << std::endl;
	std::cout << "CL4P-TP " << this->Name << " LVL" << this->Level << "has spwan" << std::endl;
}

std::string		FragTrap::getName(void) const
{
	return this->Name;
}

unsigned int		FragTrap::getHitPoints(void) const
{
	return this->HitPoints;
}

unsigned int		FragTrap::getMaxHitPoints(void) const
{
	return this->MaxHitPoints;
}

unsigned int		FragTrap::getEnergyPoints(void) const
{
	return this->EnergyPoints;
}

unsigned int		FragTrap::getMaxEnergyPoints(void) const
{
	return this->MaxEnergyPoints;
}

unsigned int		FragTrap::getLevel(void) const
{
	return this->Level;
}

unsigned int		FragTrap::getMeleeAttackDamage(void) const
{
	return this->MeleeAttackDamage;
}

unsigned int		FragTrap::getRangedAttackDamage(void) const
{
	return this->RangedAttackDamage;
}

unsigned int		FragTrap::getArmorDamageReduction(void) const
{
	return this->ArmorDamageReduction;
}

void				FragTrap::setHitPoint(unsigned int ht)
{
	this->HitPoints = ht;
}

FragTrap & FragTrap::operator=(FragTrap const &ft)
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

unsigned int	FragTrap::rangedAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " attacks "<< target  << " at range, causing " << this->RangedAttackDamage
		<< " points of damage !" << std::endl;
		std::cout << "Il a fallu plusieurs balles, ce n'était pas une Jacobs" << std::endl;
		return this->RangedAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

unsigned int	FragTrap::meleeAttack(std::string const & target) const
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

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		i = std::rand() % 7;
	if (this->HitPoints)
	{
		if (this->EnergyPoints >= 25)
		{
			this->EnergyPoints -= 25;
			if (i == 0)
				return FragTrap::rangedAttack(target);
			else if (i == 1)
				return FragTrap::meleeAttack(target);
			else if (i == 2)
			{
				std::cout << this->Name << " attacks with a Jacobs in the head of "<< target << std::endl;
				return 1000;
			}
			else if (i == 3)
			{
				std::cout << this->Name << " launch Bloodwing on " << target << std::endl;
				return 40;
			}
			else if (i == 4)
			{
				std::cout << this->Name << " use : selfBomb and die in the action";
				this->HitPoints = 0;
				return 999999;
			}
			else if (i == 5)
			{
				std::cout << this->Name << " launch Bloodwing on " << target << std::endl;
				return 40;
			}
			else if (i == 6)
			{
				std::cout << this->Name << " execute moon walk " << std::endl;
				return 10;
			}
			else if (i == 7)
			{
				std::cout << this->Name << " lance ses couille dans le potager de " << target << std::endl;
				return 1;
			}
		}
		else
			std::cout << "not enought energy" << std::endl;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return 0;
}

void	FragTrap::repos(void)
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
