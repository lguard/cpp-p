/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 12:02:06 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/06 17:18:36 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>


int		main(void)
{
	std::string	buff;
	int		i = 0;
	int		j = -1;
	int		index;
	phonebook tab[8];
	while (42)
	{
		std::cin >> buff;
		if (buff.compare("EXIT") == 0)
			break ;
		else if (buff.compare("ADD") == 0)
		{
			tab[i].set_phone(i);
			i++;
			if (i > 7)
				i = 0;
			j++;
			if (j > 7)
				j = 7;
		}
		else if (buff.compare("SEARCH") == 0)
		{
			for (int z = 0 ; z <= j ; z++)
				tab[z].aff_param();
			std::cout << "desired index : ";
			std::cin >> index;
			if (std::cin.eof())
				break ;
			std::cin.clear();
			if (index >= 0 && index <= j)
				tab[index].aff_list();
			else
				std::cout << "bad index" << std::endl;
		}
		if (std::cin.eof())
			break ;
	}
	return (0);
}
