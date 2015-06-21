/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Master.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:42:10 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/18 16:29:58 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASTER_HPP
# define MASTER_HPP

#include <iostream>
#include <list>
#include <ncurses.h>
#include "TimeModule.hpp"
#include "AModule.hpp"
#include "UserModule.hpp"

class		Master
{
	public:
		Master(void);
		Master(Master const &src);
		~Master(void);
		Master&					operator=(Master const &src);
		void					display(void);
		void					chargeModule(AModule *module);
		void					init_ncurse(int mode);
		static int				Height;
		static int				Width;
	private:
		std::list<AModule*>	module;
};

#endif
