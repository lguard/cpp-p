/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 21:54:56 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/13 22:16:16 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Form.hpp"
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class		OfficeBlock
{
	public:
		OfficeBlock(void);
		OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
		~OfficeBlock(void);
		void	doBureaucracy(std::string form, std::string target);
		void	setIntern(Intern &intern);
		void	setSigner(Bureaucrat &signer);
		void	setExecutor(Bureaucrat &executor);
	private:
		Intern			*Interne;
		Bureaucrat		*Signer;
		Bureaucrat		*Executor;
};

#endif
