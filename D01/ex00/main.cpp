/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 10:33:27 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 11:12:46 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*heappony = new Pony("poney qui tousse");
	heappony->killpony();
	delete heappony;
}
void	ponyOnTheStack(void)
{
	Pony		stackpony("etalon du cul");
	stackpony.killpony();
}
int		main()
{
	std::string		buff;
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
