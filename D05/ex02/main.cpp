/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:53:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:39:24 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int		main()
{
	std::srand(std::time(0));
	Bureaucrat	b0("Cortex", 1);
	Bureaucrat	b1("Minus", 71);
	Bureaucrat	b2("Coyote", 45);
	ShrubberyCreationForm f0("Poney qui tousse");
	RobotomyRequestForm f1("brebie qui boite");
	PresidentialPardonForm f2("vache asthmatique");
	try
	{
		f0.execute(b0);
		f1.execute(b0);
		f2.execute(b0);
		f0.beSigned(b0);
		f1.beSigned(b0);
		f2.beSigned(b0);
		f0.execute(b0);
		f1.execute(b0);
		f2.execute(b0);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		
		f0.execute(b1);
		f1.execute(b1);
		f2.execute(b1);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		
		f0.execute(b2);
		f1.execute(b2);
		f2.execute(b2);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	return 0;
}
