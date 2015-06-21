/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:35:10 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/13 17:40:20 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : Name("Basic Form"), Sign(false), SignGrade(50), ExecGrade(20) {}

Form::Form(Form const &src) : Name(src.getName()), Sign(src.getSign())
, SignGrade(src.getSignGrade()), ExecGrade(src.getExecGrade()) {}

Form::~Form(void) {}

Form::Form(std::string name, int SignGrade, int ExecGrade) : Name(name), Sign(false), SignGrade(SignGrade), ExecGrade(ExecGrade) {}

Form&		Form::operator=(Form const &src)
{
	this->Sign = src.getSign();
	return *this;
}

std::string			Form::getName(void) const {return this->Name;}
bool				Form::getSign(void) const {return this->Sign;}
int					Form::getSignGrade(void) const {return this->SignGrade;}
int					Form::getExecGrade(void) const {return this->ExecGrade;}

const char* Form::GradeTooHighException::what() const throw()
{
	return("form exception: the grade is too high\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("form exception: the grade is too low\n");
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->Sign == false)
	{
		bureaucrat.signForm(this->Name, this->SignGrade);
		if (this->SignGrade < bureaucrat.getGrade())
			throw Form::GradeTooLowException();
		else
			this->Sign = true;
	}
	else
		std::cout << this->Name << " already signed";
}

std::ostream & operator<<(std::ostream &o, Form const &form)
{
	o << "the Form " << form.getName();
	if (form.getSign())
		o << " is signed ";
	else
		o << " is not signed ";
	o << " and require " << form.getSignGrade() << " to be signed and "
	<< form.getExecGrade() << " to be executed." << std::endl;
	return o;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & g)
{ *this = g;}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const & g)
{
	(void)g;
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & g)
{ *this = g;}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const & g)
{
	(void)g;
	return *this;
}
