/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noob.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 14:33:00 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:36:39 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOOB_HPP
# define NOOB_HPP
# include <iostream>
#include "Victim.hpp"
typedef std::string string;

class Noob : public Victim
{
	public:
		~Noob(void);
		Noob(string name);
		Noob(Noob const & noob);
		Noob	&operator=(Noob const & noob);
		string				getName(void) const;
		virtual void		getPolymorphed(void) const;
	private:
		Noob(void);
};

#endif
