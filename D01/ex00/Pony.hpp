/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 10:32:54 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 11:03:52 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
class Pony
{
	public:
		void	killpony(void);
		Pony(std::string nom);
		~Pony(void);

	private:
		int				life;
		std::string		name;
};
#endif
