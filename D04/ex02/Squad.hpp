/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 05:30:45 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:42:25 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include <iostream>
class Squad : public ISquad
{
	public:
		virtual ~Squad(void);
		Squad(void);
		Squad(ISquad const & squad);
		ISquad&operator=(ISquad const & squad);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
	private:
		ISpaceMarine	*pool[50];
		int				unitCount;
};

#endif
