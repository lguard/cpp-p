/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 13:13:12 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/15 17:12:49 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{
	char	*s = new char[22];

	for (int i = 0; i < 8;i++)
		s[i] = static_cast<char>((std::rand() % (126 - 32)) + 32);
	s[8] = '\0';
	for(int i = 9; i < 13;i++)
		s[i] = static_cast<char>((std::rand() % 256) - 127);
	for (int i = 13; i < 21;i++)
		s[i] = static_cast<char>((std::rand() % (126 - 32)) + 32);
	s[21] = '\0';
	return static_cast<void*>(s);
}

Data	*deserialize(void *raw)
{
	Data	*ret = new Data;
	char	s1[9];
	char	s2[9];
	char	*rawc;

	rawc = static_cast<char*>(raw);
	ret->s1 = static_cast<char*>(std::memcpy(static_cast<void*>(s1), rawc, static_cast<size_t>(9)));
	std::memcpy(static_cast<void*>(&(ret->n)), rawc + 9, static_cast<size_t>(4));
	ret->s2 = static_cast<char*>(std::memcpy(static_cast<void*>(s2), rawc + 13, static_cast<size_t>(9)));

	return ret;
}

int		main(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	void	*test = serialize();
	Data	*data = deserialize(test);

	std::cout << data->s1 <<std::endl << data->n<< std::endl << data->s2 << std::endl;
	return 0;
}
