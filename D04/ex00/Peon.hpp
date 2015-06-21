/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 11:42:17 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:22:31 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
#include "Victim.hpp"
typedef std::string string;

class Peon : public Victim
{
	public:
		~Peon(void);
		Peon(string name);
		Peon(Peon const & peon);
		Peon	&operator=(Peon const & peon);
		string				getName(void) const;
		virtual void		getPolymorphed(void) const;
	private:
		Peon(void);
};

#endif
