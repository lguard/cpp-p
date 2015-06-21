/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 11:35:05 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 17:12:18 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{
	FragTrap	Mordecai;
	ScavTrap	Lilith("Lilith");
	FragTrap	Brick(Mordecai);
	FragTrap	Roland("Roland");
	ScavTrap	Noobator("Noobator");
	FragTrap	DragonShot("DragonShot");
	Mordecai = Roland;

	std::srand(std::time(0));
	std::cout << Lilith.getName() << " vs " << Roland.getName() << std::endl << std::endl;
	while (Roland.getHitPoints() && Lilith.getHitPoints())
	{
		Roland.takeDamage(Lilith.rangedAttack(Roland.getName()));
		Lilith.takeDamage(Roland.meleeAttack(Lilith.getName()));
		Roland.beRepaired(10);
		Lilith.beRepaired(15);
	}
	std::cout << Noobator.getName() << " vs " << DragonShot.getName() << std::endl << std::endl;
	while (Noobator.getHitPoints() && DragonShot.getHitPoints())
	{
		Noobator.takeDamage(DragonShot.vaulthunter_dot_exe(Noobator.getName()));
		DragonShot.takeDamage(Noobator.challengeNewcomer(DragonShot.getName()));
		Noobator.beRepaired(7);
		DragonShot.beRepaired(6);
	}
	return 0;
}
