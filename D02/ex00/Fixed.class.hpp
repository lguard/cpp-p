/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 10:42:16 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/08 15:06:59 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &		operator=(Fixed const &src);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		int			getFractionalits(void) const;
	private:
		int			integer;
		static int const	fb;
};

#endif
