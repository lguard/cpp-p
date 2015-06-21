/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 13:57:24 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 14:26:43 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int nZombie);
		~ZombieHorde(void);
		void	randomZ(Zombie *z);
		void	announce(void);
	private:
		int		m_nbZombie;
		Zombie	*tabz;
};

#endif
