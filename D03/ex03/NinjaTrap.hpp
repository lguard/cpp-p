/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 10:18:30 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 20:07:33 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class NinjaTrap : public ClapTrap
{
	public:
		~NinjaTrap(void);
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & ft);
		NinjaTrap& operator=(NinjaTrap const &ft);
		unsigned int		rangedAttack(std::string const & target) const;
		unsigned int 		meleeAttack(std::string const & target) const;
		void				ninjaShoeboxNinjaTrap(ClapTrap & ft);
		void				ninjaShoeboxNinjaTrap(NinjaTrap & ft);
		void				ninjaShoeboxNinjaTrap(FragTrap & ft);
		void				ninjaShoeboxNinjaTrap(ScavTrap & ft);
};

#endif
