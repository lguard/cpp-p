/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 13:54:47 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/18 16:36:28 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserModule.hpp"

UserModule::UserModule(void)
{
	struct utsname u;
	uname(&u);
	this->uName = getpwuid(getuid())->pw_name;
	this->gName = getgrgid(getgid())->gr_name;
	this->hName = u.nodename;
}

UserModule::UserModule(UserModule const &src) {*this = src;}

UserModule::~UserModule(void) { return ; }

UserModule&		UserModule::operator=(UserModule const &src) { (void)src; return *this;}

void	UserModule::display(void) const
{
	std::cout << this->uName << std::endl;
	std::cout << this->gName << std::endl;
	std::cout << this->hName << std::endl;
}
