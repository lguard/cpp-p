/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:11:04 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/13 17:41:42 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name("Bureaucrat"), Grade(1) { return ; }

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade)
{
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : Name(src.getName()), Grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat(void) { return ; }

Bureaucrat&		Bureaucrat::operator=(Bureaucrat &src)
{
	this->Grade = src.getGrade();
	return *this;
}


std::string const	Bureaucrat::getName() const {return this->Name;}
int					Bureaucrat::getGrade() const {return this->Grade;}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade "
	<< bureaucrat.getGrade() << "." << std::endl;
	return o;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("the grade is too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("the grade is too low\n");
}


void		Bureaucrat::signForm(std::string fname, int grade)
{
	if (this->Grade > grade)
	{
		std::cout << this->Name << " cannot sign " << fname << " because Grad is too low." << std::endl;
	}
	else
	{
		std::cout << this->Name << " signs " << fname << std::endl;
	}
}

Bureaucrat & Bureaucrat::operator++(void)
{
	this->Grade--;
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return *this;
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat temp(*this);
	this->Grade--;
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return temp;
}

Bureaucrat & Bureaucrat::operator--(void)
{
	this->Grade++;
	if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return *this;
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat temp(*this);
	this->Grade++;
	if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return temp;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & g)
{ *this = g;}
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & g)
{
	(void)g;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & g)
{ *this = g;}
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & g)
{
	(void)g;
	return *this;
}
