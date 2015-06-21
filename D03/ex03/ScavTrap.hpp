/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 16:14:33 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 19:03:41 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		~ScavTrap(void);
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & ft);
		ScavTrap& operator=(ScavTrap const &ft);
		unsigned int		rangedAttack(std::string const & target) const;
		unsigned int 		meleeAttack(std::string const & target) const;
		unsigned int		challengeNewcomer(std::string const & target);
};

#endif
