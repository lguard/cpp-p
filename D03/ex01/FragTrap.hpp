/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 10:18:30 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 17:04:44 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	public:
		~FragTrap(void);
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & ft);
		FragTrap& operator=(FragTrap const &ft);
		std::string			getName(void) const;
		unsigned int		getHitPoints(void) const;
		unsigned int		getMaxHitPoints(void) const;
		unsigned int		getEnergyPoints(void) const;
		unsigned int		getMaxEnergyPoints(void) const;
		unsigned int		getLevel(void) const;
		unsigned int		getMeleeAttackDamage(void) const;
		unsigned int		getRangedAttackDamage(void) const;
		unsigned int		getArmorDamageReduction(void) const;
		void				setHitPoint(unsigned int ht);
		unsigned int		rangedAttack(std::string const & target) const;
		unsigned int 		meleeAttack(std::string const & target) const;
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		unsigned int		vaulthunter_dot_exe(std::string const & target);
		void				repos(void);
		private:
		std::string					Name;
		unsigned int				HitPoints;
		unsigned int				MaxHitPoints;
		unsigned int				EnergyPoints;
		unsigned int				MaxEnergyPoints;
		unsigned int				Level;
		unsigned int				MeleeAttackDamage;
		unsigned int				RangedAttackDamage;
		unsigned int				ArmorDamageReduction;
};

#endif
