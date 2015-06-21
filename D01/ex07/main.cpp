/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 18:24:27 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 19:44:39 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	std::string		filename_r;
	char			tmp[65536 + 1];
	std::string		tmp2;
	std::size_t		i;
	std::string		av2;
	std::string		av3;

	i = 0;
	if (ac == 4)
	{
		av2 = av[2];
		av3 = av[3];
		std::ifstream	ifs(av[1]);
		if (!ifs)
			return (1);
		filename_r = av[1];
		filename_r += ".replace";
		std::ofstream	ofs(filename_r);
		if (!ofs)
			return (1);
		while(!ifs.eof())
		{
			ifs.read(tmp, 65536);
			tmp2 += tmp;
		}
		while (42)
		{
 			i = tmp2.find(av2, i);
			if (i == std::string::npos)
				break ;
			tmp2.replace(i, av2.size(), av3);
			i += av3.size();
		}
		ifs.close();
		ofs << tmp2;
		ofs.close();
	}
	return 0;
}
