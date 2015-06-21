/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:26:43 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/06 16:23:34 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

void		phonebook::set_phone(int nu)
{
	this->index = nu;
	std::cout	<< "first_name : ";
	std::cin >> this->first_name;
	std::cout	<< "last_name : ";
	std::cin >> this->last_name;
	std::cout	<< "nickname : ";
	std::cin >> this->nickname;
	std::cout	<< "login : ";
	std::cin >> this->login;
	std::cout	<< "postal : ";
	std::cin >> this->postal;
	std::cout	<< "address : ";
	std::cin >> this->address;
	std::cout	<< "email_address : ";
	std::cin >> this->email_address;
	std::cout	<< "phone_number : ";
	std::cin >> this->phone_number;
	std::cout	<< "birthday_date : ";
	std::cin >> this->birthday_date;
	std::cout	<< "favorite : ";
	std::cin >> this->favorite;
	std::cout	<< "meal : ";
	std::cin >> this->meal;
	std::cout	<< "underwear_color : ";
	std::cin >> this->underwear_color;
	std::cout	<< "darkest_secret : ";
	std::cin >> this->darkest_secret;
}

void		phonebook::aff_param(void)
{
	std::string		tmp;

	std::cout << "|" << std::setw(10) << std::setfill ('_') << this->index << "|";
	std::cout << std::setw(10) << std::setfill ('_');
	tmp = this->first_name;
	if (tmp.size() > 10)
		tmp.resize(9), tmp += ".";
	std::cout << tmp << "|" << std::setw(10) << std::setfill ('_');
	tmp = this->last_name;
	if (tmp.size() > 10)
		tmp.resize(9), tmp += ".";
	std::cout << tmp << "|" << std::setw(10) << std::setfill ('_');
	tmp = this->nickname;
	if (tmp.size() > 10)
		tmp.resize(9), tmp += ".";
	std::cout << tmp << "|" << std::endl;
}

void		phonebook::aff_list(void)
{
	std::cout << this->index << std::endl;
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal << std::endl;
	std::cout << this->address << std::endl;
	std::cout << this->email_address << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite << std::endl;
	std::cout << this->meal << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->darkest_secret << std::endl;

}
