/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TimeModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:36:13 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/18 16:19:23 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMEMODULE_HPP
# define TIMEMODULE_HPP

#include <iostream>
#include <ctime>
#include <pwd.h>
#include <grp.h>
#include <sys/utsname.h>
#include <sys/types.h>
#include <unistd.h>
#include "AModule.hpp"

class		TimeModule : public AModule
{
	public:
		TimeModule(void);
		TimeModule(TimeModule const &src);
		~TimeModule(void);
		TimeModule&			operator=(TimeModule const &src);
		virtual void				display(void) const;
};

#endif
