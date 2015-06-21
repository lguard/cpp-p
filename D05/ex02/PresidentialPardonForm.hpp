/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 16:17:17 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:45:23 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARADONFORM_HPP
# define PRESIDENTIALPARADONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class		PresidentialPardonForm : public Form
{
	public:
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm&				operator=(PresidentialPardonForm const &src);
		virtual void		formCheck(std::string name);
};

#endif
