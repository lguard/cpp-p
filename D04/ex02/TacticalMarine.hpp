/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 05:33:36 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:33:35 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEMARINE_HPP
# define SPACEMARINE_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

class TacticalMarine  : public ISpaceMarine
{
	public:
		virtual ~TacticalMarine ();
		TacticalMarine();
		TacticalMarine(TacticalMarine const & marine);
		TacticalMarine&operator=(TacticalMarine const & marine);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
		int			getHP() const;
	private:
		int			_HP;
};

#endif
