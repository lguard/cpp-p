/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 12:29:05 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/15 12:51:52 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

template<typename T>
void	iter(T *tab, size_t len, void (*f)(T*e))
{
	for(size_t i = 0; i < len; i++)
		(*f)(&tab[i]);
}

template<typename T>
void	fun(T *e)
{
	std::cout << *e;
}

template<typename T>
void	fun0(T *e)
{
	*e += 1;;
}

int		main()
{
	int			tab[5] = {1,2,3,4,5};
	char		tab1[5] = {'c','h','a','r','\0'};
	double		tab2[5] = {1.2,2.3,3.8857,4.867,5.51};
	iter(tab, 5, fun);
	std::cout << std::endl;
	iter(tab1, 5, fun);
	std::cout << std::endl;
	iter(tab2, 5, fun);
	std::cout << std::endl;
	iter(tab, 5, fun0);
	iter(tab1, 5, fun0);
	iter(tab2, 5, fun0);
	iter(tab, 5, fun);
	std::cout << std::endl;
	iter(tab1, 5, fun);
	std::cout << std::endl;
	iter(tab2, 5, fun);
	std::cout << std::endl;
	return 0;
}
