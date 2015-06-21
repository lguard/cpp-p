/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Master.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:42:15 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/18 16:35:40 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"


int		Master::Height = 0;
int		Master::Width = 0;

Master::Master(void) {}

Master::Master(Master const &src) { *this = src; }

Master::~Master(void) { return ; }

Master&		Master::operator=(Master const &src) { (void)src; return *this;}

void	Master::init_ncurse(int mode)
{
	if (mode)
	{
		initscr();
		noecho();
		curs_set(0);
		keypad(stdscr, TRUE);
		nodelay(stdscr, TRUE);
		getmaxyx(stdscr, Master::Height, Master::Width);
	}
	else
		endwin();
}

void			Master::display(void)
{
	std::list<AModule*>::const_iterator	it = this->module.begin();

	while(it != this->module.end())
	{
		(*it)->display();
		it++;
	}
}

void			Master::chargeModule(AModule *module)
{
	this->module.push_back(module);
}
