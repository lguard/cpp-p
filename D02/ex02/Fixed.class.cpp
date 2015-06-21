/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 10:42:46 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/09 10:52:17 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const		Fixed::fb = 8;

//*******************Constructor

Fixed::~Fixed(void) {}

Fixed::Fixed(void) : integer(0) {}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int const integer)
{
	this->integer = integer * (1 << 8);
}

Fixed::Fixed(float const flotan)
{
	this->integer = flotan * (1 << Fixed::fb);
	std::cout << "lalalalal" << this->integer <<std::endl;
}

//*******************Constructor

//*******************Operator
//
Fixed & Fixed::operator=(Fixed const &src)
{
	this->integer = src.getRawBits();
	return *this;
}

bool		Fixed::operator<(Fixed const &src) const
{
	if (this->integer < src.getRawBits())
		return true;
	return false;
}

bool		Fixed::operator>(Fixed const &src) const
{
	if (this->integer > src.getRawBits())
		return true;
	return false;
}

bool		Fixed::operator<=(Fixed const &src) const
{
	if (this->integer <= src.getRawBits())
		return true;
	return false;
}

bool		Fixed::operator>=(Fixed const &src) const
{
	if (this->integer >= src.getRawBits())
		return true;
	return false;
}

bool		Fixed::operator==(Fixed const &src) const
{
	if (this->integer == src.getRawBits())
		return true;
	return false;
}

Fixed		Fixed::operator+(Fixed const &src) const
{
	return Fixed((this->integer + src.getRawBits()) / (1 << Fixed::fb));
}

Fixed		Fixed::operator-(Fixed const &src) const
{
	return Fixed((this->integer - src.getRawBits()) / (1 << Fixed::fb));
}

Fixed		Fixed::operator*(Fixed const &src) const
{
	return Fixed(((float)this->integer / (1 << Fixed::fb)) *
			((float)src.getRawBits()) / (1 << Fixed::fb));
}

Fixed		Fixed::operator/(Fixed const &src) const
{
	return Fixed(((float)this->integer / (1 << Fixed::fb)) /
			((float)src.getRawBits()) / (1 << Fixed::fb));
}

//*******************Operator

//*******************Methode

int		Fixed::getRawBits(void) const
{
	return this->integer;
}

void	Fixed::setRawBits(int const raw)
{
	this->integer = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->integer) / (1 << 8);
}

int		Fixed::toInt(void) const
{
	return (this->integer >> 8);
}

//*******************Methode

std::ostream & operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}

Fixed	const &Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return a;
	return b;
}

Fixed	const &Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed	const &Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return a;
	return b;
}

Fixed	const &Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed & Fixed::operator++(void)
{
	this->integer = this->integer + 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->integer = this->integer + 1;
	return temp;
}

Fixed & Fixed::operator--(void)
{
	this->integer = this->integer - 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->integer = this->integer - 1;
	return temp;
}
