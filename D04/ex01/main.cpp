/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 04:40:50 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 05:14:48 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include <iostream>


int main()
{
	std::cout << "main du sujet" << std::endl;
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	delete zaz;
	delete b;
	std::cout << std::endl << "mon main" << std::endl;
	Character Noob("Noob");
	Enemy* su = new SuperMutant();

	std::cout << Noob;
	Noob.attack(su);
	std::cout << Noob;
	Noob.equip(pr);
	std::cout << Noob;
	Noob.attack(su);
	std::cout << Noob;
	Noob.equip(pf);
	std::cout << Noob;
	Noob.attack(su);
	std::cout << Noob;
	Noob.attack(su);
	std::cout << Noob;
	Noob.attack(su);
	std::cout << Noob;
	Noob.equip(pr);
	std::cout << Noob;
	Noob.recoverAP();
	std::cout << Noob;
	std::cout << "SuperMutant HP ->" << su->getHP() << std::endl;
	Noob.attack(su);
	std::cout << "SuperMutant HP ->" << su->getHP() << std::endl;
	delete su;
	return 0;
}
