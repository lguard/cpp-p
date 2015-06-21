/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:16:37 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 13:52:57 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int		main(void)
{
	Zombie	*tom;
	Zombie	*brandon;
	Zombie	*beverly;
	Zombie	*bella;
	Zombie	*rando;

	tom = ZombieEvent::newZombie("tom");
	delete tom;
	ZombieEvent::setZombieType("plumber");
	brandon = ZombieEvent::newZombie("brandon");
	delete brandon;
	ZombieEvent::setZombieType("bitch");
	beverly = ZombieEvent::newZombie("beverly");
	delete beverly;
	ZombieEvent::setZombieType("gimps");
	bella = ZombieEvent::newZombie("bella");
	delete bella;
	ZombieEvent::setZombieType("Random");
	rando = ZombieEvent::randomChump();
	delete rando;
	return 0;
}
