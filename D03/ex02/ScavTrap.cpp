/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 16:14:40 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 19:06:01 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)
{
	std::cout << "Je me pendrai à ma pierre tombale si tu ne me laisses pas jouer avec ton petit trou de balle" << std::endl;
}

ScavTrap::ScavTrap(void)
{
	this->Name = ("ScavTrap");
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 50;
	this->MaxEnergyPoints = 50;
	this->Level = 1;
	this->MeleeAttackDamage = 20;
	this->RangedAttackDamage = 15;
	this->ArmorDamageReduction = 3;
	std::cout << "hmmm tu sens boooon, .... J'en transpire du SLIP" << std::endl;
	std::cout << "ScavTrap " << this->Name << " LVL" << this->Level << "has spwan" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->Name = (name);
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 50;
	this->MaxEnergyPoints = 50;
	this->Level = 1;
	this->MeleeAttackDamage = 20;
	this->RangedAttackDamage = 15;
	this->ArmorDamageReduction = 3;
	std::cout << "hmmm tu sens boooon, .... J'en transpire du SLIP" << std::endl;
	std::cout << "ScavTrap " << this->Name << " LVL" << this->Level << "has spwan" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ft)
{
	*this = ft;
	std::cout << "hmmm tu sens boooon, .... J'en transpire du SLIP" << std::endl;
	std::cout << "ScavTrap " << this->Name << " LVL" << this->Level << "has spwan" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &ft)
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

unsigned int	ScavTrap::rangedAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " shot "<< target  << " with a rifle " << this->RangedAttackDamage
		<< " points of damage !" << std::endl;
		std::cout << "You can hide, but you can't run! Pussy!" << std::endl;
		return this->RangedAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

unsigned int	ScavTrap::meleeAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " kick "<< target  << " for " << this->MeleeAttackDamage
		<< " points of damage !" << std::endl;
		return this->MeleeAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

unsigned int	ScavTrap::challengeNewcomer(std::string const & target)
{
	int		i = std::rand() % 7;
	if (this->HitPoints)
	{
		if (this->EnergyPoints >= 25)
		{
			this->EnergyPoints -= 25;
			if (i == 0)
				return ScavTrap::rangedAttack(target);
			else if (i == 1)
				return ScavTrap::meleeAttack(target);
			else if (i == 2)
			{
				std::cout << this->Name << " miss is shot and suicide himself "<< target << std::endl, this->HitPoints = 0;;
				return 0;
			}
			else if (i == 3)
			{
				std::cout << this->Name << " trow BloodyAxe on " << target << std::endl;
				return 55;
			}
			else if (i == 4)
			{
				std::cout << this->Name << " insulte " << target << std::endl;
				return 5;
			}
			else if (i == 5)
			{
				std::cout << this->Name << " show a picture of the mother of " << target << std::endl;
				return 30;
			}
			else if (i == 6)
			{
				std::cout << this->Name << " sing a justinBiber song" << std::endl;
				return 60;
			}
		}
		else
			std::cout << "not enought energy" << std::endl;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return 0;
}
