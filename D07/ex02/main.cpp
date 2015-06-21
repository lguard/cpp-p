/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 15:23:20 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/15 16:56:43 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main()
{
	Array<std::string>	tab(static_cast<unsigned int>(3));
	Array<std::string>	tabErase(static_cast<unsigned int>(5));
	tabErase[2] = "Fake";
	tab[0] = "un";
	tab[1] = "deux";
	tab[2] = "trois";
	tabErase = tab;
	Array<std::string>	tab1 = tab;
	Array<std::string>	tab2(tab);
	std::cout << "Base                   " << tab[2] << std::endl;
	std::cout << "operateur =            " << tab1[2] << std::endl;
	std::cout << "constructeur par copie " << tab2[2] << std::endl;
	std::cout << "ecrasement             " << tabErase[2] << std::endl;
	try
	{
		std::cout << tab[50];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
