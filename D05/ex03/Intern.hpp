/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 18:48:30 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/13 20:21:15 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
class		Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern&			operator=(Intern const &src);
		Form			*makeForm(std::string form, std::string target);
};

#endif
