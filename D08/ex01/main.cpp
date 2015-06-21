/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:20:44 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/17 13:42:35 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::list<int>		test;
	Span sp = Span(5);
	Span largeSp = Span(100);
	Span largeSp2 = Span(101);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	for (int i = 0;i<101;++i)
		test.push_back(i);
	try
	{
		largeSp.addNumber(test.begin(), test.end());
		std::cout << largeSp.shortestSpan() << std::endl;
		std::cout << largeSp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
	try
	{
		largeSp.addNumber(test.begin(), test.end());
		std::cout << largeSp.shortestSpan() << std::endl;
		std::cout << largeSp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
	try
	{
		largeSp2.addNumber(test.begin(), test.end());
		std::cout << largeSp2.shortestSpan() << std::endl;
		std::cout << largeSp2.longestSpan() << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}


}
