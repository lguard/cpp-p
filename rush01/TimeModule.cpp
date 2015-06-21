/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TimeModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:36:06 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/18 16:36:25 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TimeModule.hpp"

TimeModule::TimeModule(void) {}

TimeModule::TimeModule(TimeModule const &src) {*this = src;}

TimeModule::~TimeModule(void) { return ; }

TimeModule&		TimeModule::operator=(TimeModule const &src) { (void)src; return *this;}

void	TimeModule::display(void) const
{
	time_t		t = time(NULL);
	std::cout << ctime(&t) << std::endl;
}
