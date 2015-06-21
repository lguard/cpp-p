/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 17:19:01 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/14 09:45:53 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREAYIONFORM_HPP
# define SHURBBERYCREAYIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>


class		ShrubberyCreationForm : public Form
{
	public:
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm&				operator=(ShrubberyCreationForm const &src);
		virtual void		formCheck(std::string name);
};

#endif
