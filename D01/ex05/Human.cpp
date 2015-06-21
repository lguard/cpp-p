/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 14:39:22 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/07 16:14:33 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

std::string		Human::identify(void) const
{
	return (br.identify());
}

Brain		Human::get_brain(void)
{
	return this->br;
}
