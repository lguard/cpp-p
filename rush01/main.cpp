/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:05:08 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/18 16:36:29 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserModule.hpp"
#include "TimeModule.hpp"
#include "Master.hpp"
#include "unistd.h"
int		main(void)
{
	Master	m;
	AModule *t = new TimeModule;
	AModule *u = new UserModule;
	m.init_ncurse(1);
	m.chargeModule(t);
	m.chargeModule(u);
	m.display();
	while (getch() != KEY_LEFT)
		;
	m.init_ncurse(0);
	return 0;
}
