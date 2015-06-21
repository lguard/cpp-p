/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:35:10 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/14 14:21:45 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : Name("Basic Form"), SignGrade(50), ExecGrade(20), Target("Default"), Sign(false) {}

Form::Form(Form const &src) : Name(src.getName())
, SignGrade(src.getSignGrade()), ExecGrade(src.getExecGrade()), Target(src.getTarget()), Sign(src.getSign()){}

Form::~Form(void) {}

Form::Form(std::string name, int SignGrade, int ExecGrade, std::string target) : Name(name), SignGrade(SignGrade), ExecGrade(ExecGrade), Target(target), Sign(false) {}

Form&		Form::operator=(Form const &src)
{
	this->Sign = src.getSign();
	return *this;
}

std::string			Form::getName(void) const {return this->Name;}
bool				Form::getSign(void) const {return this->Sign;}
int					Form::getSignGrade(void) const {return this->SignGrade;}
int					Form::getExecGrade(void) const {return this->ExecGrade;}
std::string			Form::getTarget(void) const {return this->Target;};

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

void		Form::execute(Bureaucrat & executor)
{
	int		i;

	if (this->Sign == true)
	{
		if ((i = executor.executeForm(*this)) == 0)
			formCheck(this->Target);
		else if (i == -1)
			throw Form::GradeTooLowException();
		else
			throw Form::GradeTooHighException();
	}
	else
		std::cout << this->Name << " is unsigned so " << executor.getName()
		<< " can't execute it" << std::endl;
}
