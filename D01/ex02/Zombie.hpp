/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 11:17:32 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 13:48:17 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
class Zombie
{
	public:
		void		announce(void);
		void		set_name(std::string);
		void		set_type(std::string);
		std::string	get_name(void);
		std::string	get_type(void);
		Zombie(void);
		~Zombie(void);
	private:
		std::string		m_name;
		std::string		m_type;
};
#endif
