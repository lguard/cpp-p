/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 21:54:56 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/14 14:16:23 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : Interne(NULL), Signer(NULL), Executor(NULL){ return ; }

OfficeBlock::~OfficeBlock(void) { return ; }

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor)
: Interne(intern), Signer(signer), Executor(executor) { return ; }

void	OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form	*f;
	f = this->Interne->makeForm(form, target);
	if (f)
	{
		f->beSigned(*this->Signer);
		f->execute(*this->Executor);
	}
}

void	OfficeBlock::setIntern(class Intern &intern)
{
	this->Interne = &intern;
}

void	OfficeBlock::setSigner(Bureaucrat &signer)
{

	this->Signer = &signer;
}

void	OfficeBlock::setExecutor(Bureaucrat &executor)
{
	this->Executor = &executor;
}
