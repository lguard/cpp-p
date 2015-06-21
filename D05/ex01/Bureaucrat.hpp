/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:11:04 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/13 17:41:41 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>

class		Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		void				signForm(std::string fname, int sign);
		Bureaucrat&			operator=(Bureaucrat &src);
		Bureaucrat&			operator++(void);
		Bureaucrat			operator++(int);
		Bureaucrat&			operator--(void);
		Bureaucrat			operator--(int);
	

		std::string const	getName() const;
		int					getGrade() const;
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
		std::string const	Name;
		int					Grade;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const &bureaucrat);

#endif
