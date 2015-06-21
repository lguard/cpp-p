/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:16:56 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 13:48:10 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <cstdlib>
#include <iostream>
#include <ctime>
# include "Zombie.hpp"
class ZombieEvent
{
	public:
		static void			setZombieType(std::string type);
		static Zombie		*newZombie(std::string name);
		static Zombie		*randomChump(void);
		static std::string	m_type;
};

#endif
