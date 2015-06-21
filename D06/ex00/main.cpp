/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 11:18:02 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/15 10:43:18 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int		ctype(char *s)
{
	std::string str = s;
	int			ret = 0;
	size_t		i;

	i = str.find(".");
	if (i!=std::string::npos)
	{
		if (i == str.rfind(".") && str.size() != str.rfind(".") + 1)
			ret++;
		else
			return -1;
	}
	i = str.find("f");
	if (i!=std::string::npos)
	{
		if (ret == 1 && str.size() == str.rfind("f") + 1)
			ret++;
		else
			return -1;
	}
	return ret;
}

void	convint(char *av1, std::stringstream &c, std::stringstream &i, std::stringstream &f, std::stringstream &d)
{
	int		nb = std::atoi(av1);
	if (nb > 127 || nb < -128)
		c << "impossible";
	else
		c << "'" << static_cast<char>(nb) << "'";
	i << nb;
	f << static_cast<float>(nb) << "f";
	d << static_cast<double>(nb);
}

void	convfloat(char *av1, std::stringstream &c, std::stringstream &i, std::stringstream &f, std::stringstream &d)
{
	std::string s = av1;
	int		nb;
	try{f << std::stof(s) << "f";}
	catch(const std::out_of_range& oor)
	{
		if (av1[0] == '-')
			f << "-";
		else
			f << "+";
		f << "inf";
	}
	nb = std::atoi(av1);
	i << nb;
	if (nb > 127 || nb < -128)
		c << "impossible";
	else
		c << "'" << nb << "'";
	d << std::atof(av1);
}

void	convdouble(char *av1, std::stringstream &c, std::stringstream &i, std::stringstream &f, std::stringstream &d)
{
	std::string s = av1;
	int		nb;
	try{ f << std::stof(s) << "f";}
	catch(const std::out_of_range& oor)
	{
		if (av1[0] == '-')
			f << "-";
		else
			f << "+";
		f << "inf";
	}
	nb = std::atoi(av1);
	i << nb;
	if (nb > 127 || nb < -128)
		c << "impossible";
	else
		c << "'" << nb << "'";
	try{d << std::stod(s);}
	catch(const std::out_of_range& oor)
	{
		if (av1[0] == '-')
			d << "-";
		else
			d << "+";
		d << "inf";
	}
}

int		main(int ac, char **av)
{
	int		test;
	std::stringstream	c;
	std::stringstream	i;
	std::stringstream	f;
	std::stringstream	d;
	std::string			s;
	if (ac > 1)
	{
		test = ctype(av[1]);
		switch (test)
		{
			case 0:
				convint(av[1], c, i, f, d);
				break ;
			case 1:
				convfloat(av[1], c, i, f, d);
				break ;
			case 2:
				convdouble(av[1], c, i, f, d);
				break ;
			case -1:
				std::cout << "error" << std::endl;
				break ;
		}
		
		c >> s;
		std::cout << "char: " << s << std::endl;
		i >> s;
		std::cout <<"int: " << s << std::endl;
		f >> s;
		std::cout << "float: "<< s <<std::endl;
		d >> s;
		std::cout << "double: " << s << std::endl;
	}
	return 0;
}
