/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 14:35:10 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/14 09:44:59 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class		Form
{
	public:
		Form(void);
		Form(Form const &src);
		virtual ~Form(void);
		Form(std::string name, int SignGrade, int ExecGrade, std::string target);
		std::string			getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		std::string			getTarget(void) const;
		Form&				operator=(Form const &src);
		void				beSigned(Bureaucrat &bureaucrat);
		void				execute(Bureaucrat & executor);
		virtual void		formCheck(std::string name) = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const & g);
				GradeTooHighException&operator=(GradeTooHighException const & g);
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const & g);
				GradeTooLowException&operator=(GradeTooLowException const & g);
				virtual const char* what() const throw();
		};
	private:
		const std::string	Name;
		const int			SignGrade;
		const int			ExecGrade;
		std::string			Target;
		bool				Sign;
};

std::ostream&	operator<<(std::ostream& o, Form const &form);

#endif
