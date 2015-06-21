/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:53:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:49:55 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int		main()
{
	std::srand(std::time(0));
	Intern		i0;
	Bureaucrat	b0("Cortex", 1);
	Bureaucrat	b1("Minus", 70);
	Bureaucrat	b2("Coyote", 45);
	Form		*f0;
	Form		*f1;
	Form		*f2;
	Form		*f3;

	f0 = i0.makeForm("shrubbery creation", "President of US");
	f1 = i0.makeForm("robotomy request", "World");
	f2 = i0.makeForm("presidential pardon", "BipBip");
	f3 = i0.makeForm("hand of saruman", "sadfasdf");
	try
	{
		f0->beSigned(b0);
		f0->execute(b0);
		std::cout << std::endl;
		f1->beSigned(b0);
		f1->execute(b0);
		std::cout << std::endl;
		f2->beSigned(b0);
		f2->execute(b0);
		std::cout << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		f0->execute(b1);
		f1->execute(b1);
		f2->execute(b1);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	try
	{
		f0->execute(b2);
		f1->execute(b2);
		f2->execute(b2);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	if (f0)
		delete f0;
	if (f1)
		delete f1;
	if (f2)
		delete f2;
	if (f3)
		delete f3;
	return 0;
}
