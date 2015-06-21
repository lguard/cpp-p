/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 17:17:08 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:39:59 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form::Form("RobotomyRequestForm", 72, 45, "Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form::Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form::Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm&		RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	(void)src;
	return *this;
}

void		RobotomyRequestForm::formCheck(std::string name)
{
	int	i = std::rand() % 100;
	if (i > 50)
		std::cout << name << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomized fail on " << name << std::endl;

}
