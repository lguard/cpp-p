/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:10:18 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/17 13:41:12 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
# include <stack>
int		main(void)
{
	std::vector<int>	v;
	std::vector<int>::iterator it;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	it = easyfind(v, 4);
	if (it != v.end())
		std::cout << *it << std::endl;
	return 0;
}
