/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:53:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 15:29:23 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include "OfficeBlock.hpp"

int		main()
{
	std::srand(std::time(0));
	Intern		Cotoye;
	Bureaucrat	Cortex("Cortex", 1);
	Bureaucrat	Minus("Minus", 70);
	Bureaucrat	Jango("Jango", 20);
	OfficeBlock	ob0(&Cotoye, &Minus, &Cortex);
	OfficeBlock	ob1;

	ob1.setIntern(Cotoye);
	ob1.setSigner(Minus);
	ob1.setExecutor(Cortex);
	try
	{
		ob0.doBureaucracy("obotomy request", "mdr-Pach");
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		ob1.doBureaucracy("Robotomy request", "mdr-Pach");
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		ob1.doBureaucracy("obotomy request", "mdr-Pach");
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		ob0.doBureaucracy("presidential pardon", "mdr-Pach");
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	return 0;
}
