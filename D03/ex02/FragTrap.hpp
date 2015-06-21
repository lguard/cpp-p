/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 10:18:30 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 18:29:09 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
	public:
		~FragTrap(void);
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & ft);
		FragTrap& operator=(FragTrap const &ft);
		unsigned int		rangedAttack(std::string const & target) const;
		unsigned int 		meleeAttack(std::string const & target) const;
		unsigned int		vaulthunter_dot_exe(std::string const & target);
};

#endif
