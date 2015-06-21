/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:27:45 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 14:32:48 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_ptr(std::string *s)
{
	std::cout << *s << std::endl;
}

void	print_ref(std::string &s)
{
	std::cout << s << std::endl;
}

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	print_ptr(&str);
	print_ref(str);
	return 0;
}
