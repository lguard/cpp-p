/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AModule.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 12:39:17 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/18 16:19:12 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMODULE_HPP
# define AMODULE_HPP

class		AModule
{
	public:
		AModule(void);
		AModule(int x, int y);
		AModule(AModule const &src);
		int		getSize(void) const;
		int		getPosX(void) const;
		int		getPosY(void) const;
		~AModule(void);
		AModule&			operator=(AModule const &src);
		virtual void				display() const  = 0;
	protected:
		int		Size;
		int		PosX;
		int		PosY;
};

#endif
