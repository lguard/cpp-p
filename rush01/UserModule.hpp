/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 13:54:47 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/18 16:19:50 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERMODULE_HPP
# define USERMODULE_HPP

#include <iostream>
#include <pwd.h>
#include <grp.h>
#include <sys/utsname.h>
#include <sys/types.h>
#include <unistd.h>
#include "AModule.hpp"

class		UserModule : public AModule
{
	public:
		UserModule(void);
		UserModule(UserModule const &src);
		~UserModule(void);
		UserModule&			operator=(UserModule const &src);
		virtual void				display(void) const;
	private:
		std::string		uName;
		std::string		gName;
		std::string		hName;
};

#endif
