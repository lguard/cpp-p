/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:53:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/13 13:28:33 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int		main()
{
	try
	{
		Bureaucrat noob0("Cortex", 3);
		std::cout << noob0;
		noob0++;
		std::cout << noob0;
		noob0++;
		std::cout << noob0;
		noob0++;
		std::cout << noob0;
		noob0++;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat noob("yoda", 0);
		std::cout << noob;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat noob1("palpatin", 160);
		std::cout << noob1;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat noob0("Minus", 147);
		std::cout << noob0;
		noob0--;
		std::cout << noob0;
		noob0--;
		std::cout << noob0;
		noob0--;
		std::cout << noob0;
		noob0--;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	return 0;
}
