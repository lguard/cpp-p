/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:26:48 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/16 17:56:19 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack(void) { return ; }

MutantStack::MutantStack(MutantStack const &src) { if (*this != src) { } return ; }

MutantStack::~MutantStack(void) { return ; }

MutantStack&		MutantStack::operator=(MutantStack const &src) { if (*this != src) { } return *this; }
