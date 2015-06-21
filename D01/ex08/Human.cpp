/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 19:56:54 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 21:10:57 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack on -> " <<target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
std::cout << "rangedAttack on -> " <<target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
std::cout << "intimidatingShout on -> " <<target << std::endl;
}


void	Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*f[3])(std::string const & t) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string		list[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	int		i;

	i = 0;
	while (i < 3)
	{
		if (list[i].compare(action_name) == 0)
			(*(f + i))(target);
		i++;
	}
}
