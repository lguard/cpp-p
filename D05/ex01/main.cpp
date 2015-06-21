/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/13 12:53:53 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/13 15:50:55 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

int		main()
{
	try
	{
		Bureaucrat	b0("Cortex", 3);
		Form		f0("28c", 20, 1);
		std::cout << b0 << f0;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Minus", 150);
		Form		f0("40t", 50, 1);
		std::cout << b0 << f0;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("bipbip", 40);
		Form		f0("70a", 40, 1);
		std::cout << b0 << f0;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	b0("Coyote", 100);
		Form		f0("12b", 99, 1);
		std::cout << b0 << f0;
		f0.beSigned(b0);
		std::cout << f0;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what();
	}
}
