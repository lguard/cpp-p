/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 17:40:42 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/08 20:12:05 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int		main(void)
{
	Fixed	a(-10);
	Fixed	b(1.1f);
	Fixed	c(a);
	Fixed	d;
	Fixed	f;
	Fixed	const e( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a " << a << " b " << b << " c " << c << " d " << d;
	std::cout << " e " << e << std::endl;
	std::cout << "a > b " <<(a > b) << std::endl;
	std::cout << "a < b " <<(a < b) << std::endl;
	std::cout << "a >= b " <<(a >= b) << std::endl;
	std::cout << "a <= b " << (a <= b) << std::endl;
	std::cout << "a == c " <<(a == c) << std::endl;
	std::cout << "a >= c " <<(a >= c) << std::endl;
	std::cout << "a <= c " <<(a <= c) << std::endl;
	std::cout << "a + c " << (a + c) << std::endl;
	std::cout << "a - c " << (a - c) << std::endl;
	std::cout << "a * c " << (a * c) << std::endl;
	std::cout << "a / c " << (a / c) << std::endl;
	std::cout << f << std::endl;
	std::cout << --f << std::endl;
	std::cout << f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;
	std::cout << "main sujet" << std::endl;
	std::cout << d << std::endl;
	std::cout << ++d << std::endl;
	std::cout << d << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << Fixed::max( d, e ) << std::endl;
	std::cout << Fixed::min( d, e ) << std::endl;
	return 0;
}
