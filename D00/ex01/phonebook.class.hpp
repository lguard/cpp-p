/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 11:54:28 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/06 16:23:32 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iostream>
#include <iomanip>
class phonebook
{
	public:
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal;
	std::string	address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite;
	std::string	meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	void	set_phone(int);
	void	aff_param(void);
	void	aff_list(void);
};

#endif
