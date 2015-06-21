/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 17:05:06 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:31:47 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form::Form("PresidentialPardonForm", 25, 5, "Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form::Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form::Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	(void)src;
	return *this;
}

void		PresidentialPardonForm::formCheck(std::string name)
{
	std::cout << name << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
