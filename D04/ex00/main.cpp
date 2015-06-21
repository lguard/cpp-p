/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 11:48:18 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:57:09 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Noob.hpp"
# include <iostream>

void	sujet(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy'");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

void	test(void)
{
	Sorcerer	a("gandalf", "Le Blanc");
	Victim		b("orc");
	Peon		c("elfe");
	Victim		*d = new Noob("hobbit");

	a.polymorph(b);
	a.polymorph(c);
	a.polymorph(*d);
	delete d;
}

int main()
{
	std::cout << "test du sujet" << std::endl;
	sujet();
	std::cout << std::endl << "mon test" << std::endl;
	test();
	return 0;
}
