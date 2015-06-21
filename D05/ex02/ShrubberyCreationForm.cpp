/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 17:19:06 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:30:42 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form::Form("ShrubberyCreationForm", 145, 137, "Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form::Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form::Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	(void)src;
	return *this;
}

void		ShrubberyCreationForm::formCheck(std::string name)
{
	std::ofstream myfile;

	name += "_shrubbery";
	myfile.open (name);
	myfile << "       _-_\n    /~~   ~~\\\\\n /~~         ~~\\\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n";
	myfile.close();
}
