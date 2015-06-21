/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 12:01:33 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/15 12:17:33 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T const &a, T const&b)
{
	return (a < b) ? a : b;
}

template<typename T>
T	max(T const &a, T const&b)
{
	return (a > b) ? a : b;
}

int main( void )
{
	int a = 2;
	int b = 3;
	float y = 1452.0f;
	float z = 234523.23452f;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	::swap( y, z );
	std::cout << "a = " << y << ", b = " << z << std::endl;
	std::cout << "min( a, b ) = " << ::min( y,z ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( y, z ) << std::endl;
	double j = 1234.651;
	double k = 4.22222222222;
	::swap(j, k);
	std::cout << "c = " << j << ", d = " << k << std::endl;
	std::cout << "min( c, d ) = " << ::min( j, k ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( j, k ) << std::endl;
	return 0;
}
