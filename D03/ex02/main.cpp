/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 11:35:05 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 19:08:50 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
int		main()
{
	FragTrap	Mordecai("Mordecai");
	std::cout << std::endl << std::endl;
	ScavTrap	Rolland("Rolland");
	std::cout << std::endl << std::endl;
	return 0;
}
