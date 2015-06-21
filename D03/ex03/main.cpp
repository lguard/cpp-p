/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 11:35:05 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 20:10:44 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
int		main()
{
	ClapTrap	Mother("Mother");
	std::cout << std::endl << std::endl;
	FragTrap	Mordecai("Mordecai");
	std::cout << std::endl << std::endl;
	ScavTrap	Rolland("Rolland");
	std::cout << std::endl << std::endl;
	NinjaTrap	Donatello("Donatello");
	std::cout << std::endl << std::endl;
	Donatello.ninjaShoeboxNinjaTrap(Mother);
	std::cout << std::endl << std::endl;
	Donatello.ninjaShoeboxNinjaTrap(Mordecai);
	std::cout << std::endl << std::endl;
	Donatello.ninjaShoeboxNinjaTrap(Rolland);
	std::cout << std::endl << std::endl;
	Donatello.ninjaShoeboxNinjaTrap(Donatello);
	std::cout << std::endl << std::endl;
	return 0;
}
