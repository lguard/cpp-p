/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 10:45:35 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:23:45 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
typedef std::string string;

class Sorcerer
{
	public:
		~Sorcerer(void);
		Sorcerer(string name, string title);
		Sorcerer(Sorcerer const & sorcerer);
		Sorcerer	&operator=(Sorcerer const & sorcerer);
		string		getName(void) const;
		string		getTitle(void) const;
		void		polymorph(Victim const &) const;
		void		birth(void);
		void		death(void);
	private:
		string		_Name;
		string		_Title;
		Sorcerer(void);
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const & sorcerer);

#endif
