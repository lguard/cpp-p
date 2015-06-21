/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:48:30 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/13 21:44:04 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &src) {*this = src;}

Intern::~Intern(void) {}

Intern&		Intern::operator=(Intern const &src)
{
	(void)src;
	return *this;
}

Form*			Intern::makeForm(std::string form, std::string target)
{
	Form	*newf = NULL;

	if (form.compare("robotomy request") == 0)
	{
		newf = new RobotomyRequestForm(target);
	}
	else if (form.compare("presidential pardon") == 0)
	{
		newf = new PresidentialPardonForm(target);
	}
	else if (form.compare("shrubbery creation") == 0)
	{
		newf = new ShrubberyCreationForm(target);
	}
	else
		std::cout << "Unknown Formm" << std::endl;
	return newf;
}
