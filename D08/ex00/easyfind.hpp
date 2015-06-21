/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 13:25:14 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/17 14:27:39 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
template<class T>
typename T::iterator	easyfind(T cont, int toFind)
{
	return (std::find(cont.begin(), cont.end(), toFind));
}
