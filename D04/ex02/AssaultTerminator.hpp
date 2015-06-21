/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 19:00:19 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/11 19:33:37 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

class AssaultTerminator  : public ISpaceMarine
{
	public:
		virtual ~AssaultTerminator ();
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & marine);
		AssaultTerminator&operator=(AssaultTerminator const & marine);
		virtual ISpaceMarine * clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
		int			getHP() const;
	private:
		int			_HP;
};

#endif
