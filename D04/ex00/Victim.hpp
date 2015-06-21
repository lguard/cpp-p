/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 11:06:18 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/10 14:57:07 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
typedef std::string string;

class Victim
{
	public:
		virtual ~Victim(void);
		Victim(string name);
		Victim(Victim const & victim);
		Victim	&operator=(Victim const & victim);
		string				getName(void) const;
		virtual void		birth(void);
		void				death(void);
		virtual void		getPolymorphed(void) const;
	protected:
		string		_Name;
		Victim(void);
};

std::ostream	&operator<<(std::ostream &o, Victim const & victim);

#endif
