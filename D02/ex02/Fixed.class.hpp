/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 10:42:16 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/08 20:44:23 by lguarda          ###   ########.fr       */
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
		Fixed(int const integer);
		Fixed(float const flotan);
		~Fixed(void);

		Fixed &			operator=(Fixed const &src);
		bool			operator<(Fixed const &src) const;
		bool			operator<=(Fixed const &src) const;
		bool			operator>(Fixed const &src) const;
		bool			operator>=(Fixed const &src) const;
		bool			operator==(Fixed const &src) const;
		bool			operator!=(Fixed const &src) const;
		Fixed			operator+(Fixed const &src) const;
		Fixed			operator-(Fixed const &src) const;
		Fixed			operator*(Fixed const &src) const;
		Fixed			operator/(Fixed const &src) const;
		Fixed&			operator++(void);
		Fixed			operator++(int);
		Fixed&			operator--(void);
		Fixed			operator--(int);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		int				toInt(void) const;
		float			toFloat(void) const;
		static Fixed const &	max(Fixed const & a, Fixed const & b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed & a, Fixed & b);
		static Fixed const &	min(Fixed & a, Fixed & b);
	private:
		int			integer;
		static int const	fb;
};

std::ostream &	operator<<(std::ostream &o, Fixed const &src);

#endif
