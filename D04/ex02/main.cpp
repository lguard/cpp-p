/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 18:58:21 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:42:23 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* gordon = new AssaultTerminator;
	ISpaceMarine* superman = gordon->clone();
	ISpaceMarine* aliot = new TacticalMarine;
	ISpaceMarine* mc_hammer = new TacticalMarine;
	ISpaceMarine* Jhon = mc_hammer->clone();
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(gordon);
	vlc->push(superman);
	vlc->push(aliot);
	vlc->push(mc_hammer);
	vlc->push(Jhon);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	ISquad* lol = new Squad(*vlc);
	delete vlc;
	for (int i = 0; i < lol->getCount(); ++i)
	{
		ISpaceMarine* cur = lol->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete lol;
	return 0;
}
