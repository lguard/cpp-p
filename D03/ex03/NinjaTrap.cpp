/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 10:24:11 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 20:15:28 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "GoGO power Rangers nanananananana" << std::endl;
}

NinjaTrap::NinjaTrap(void)
{
	this->Name = ("NinjaTrap");
	this->HitPoints = 60;
	this->MaxHitPoints = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout << "Pizza kWaBoNgA" << std::endl;
	std::cout << "NinjaTrap " << this->Name << " LVL" << this->Level << "has spawned" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->Name = name;
	this->HitPoints = 60;
	this->MaxHitPoints = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout << "Pizza kWaBoNgA" << std::endl;
	std::cout << "NinjaTrap " << this->Name << " LVL" << this->Level << "has spawned" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ft)
{
	*this = ft;
	std::cout << "Pizza kWaBoNgA" << std::endl;
	std::cout << "NinjaTrap " << this->Name << " LVL" << this->Level << "has spawned" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &ft)
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

unsigned int	NinjaTrap::rangedAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " trow shuriken on "<< target  << this->RangedAttackDamage
		<< " points of damage !" << std::endl;
		std::cout << "Kawabonga" << std::endl;
		return this->RangedAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

unsigned int	NinjaTrap::meleeAttack(std::string const & target) const
{
	if (this->HitPoints)
	{
		std::cout << this->Name << " cut "<< target  << " with katana, causing " << this->MeleeAttackDamage
		<< " points of damage !" << std::endl;
		return this->MeleeAttackDamage;
	}
	else
		std::cout << this->Name << " can't do nothing cause : Dead" << std::endl;
	return (0);
}

void			NinjaTrap::ninjaShoeboxNinjaTrap(ClapTrap & ft)
{
	std::cout << this->Name <<  " back stabbed " << ft.getName() << std::endl;
	ft.setHitPoint(0);
}

void			NinjaTrap::ninjaShoeboxNinjaTrap(NinjaTrap & ft)
{
	std::cout << this->Name <<  " cut " << ft.getName() << "'s head" << std::endl;
	ft.setHitPoint(0);
}

void			NinjaTrap::ninjaShoeboxNinjaTrap(FragTrap & ft)
{
	std::cout << this->Name <<  " fart and " << ft.getName() << " dies by suffocation" << std::endl;
	ft.setHitPoint(0);
}

void			NinjaTrap::ninjaShoeboxNinjaTrap(ScavTrap & ft)
{
	std::cout << this->Name <<  " tell a joke at " << ft.getName() << " and he die from LMFAO"<< std::endl;
	ft.setHitPoint(0);
}
