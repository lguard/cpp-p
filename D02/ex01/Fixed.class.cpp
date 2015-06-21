/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 10:42:46 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/08 17:21:39 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const		Fixed::fb = 8;

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void) : integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->integer = integer * (1 << 8);
}

Fixed::Fixed(float const flotan)
{
	std::cout << "Float constructor called" << std::endl;
	this->integer = flotan * (1 << this->fb);
}


Fixed & Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->integer = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->integer;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream & operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
