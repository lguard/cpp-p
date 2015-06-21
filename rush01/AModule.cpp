/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AModule.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 12:39:17 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/18 16:10:33 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AModule.hpp"

AModule::AModule(void) {}

AModule::AModule(int x, int y) : PosX(x), PosY(y) {}

AModule::AModule(AModule const &src) { *this = src; }

AModule::~AModule(void) { return ; }

AModule&		AModule::operator=(AModule const &src) { (void)src; return *this;}

int		AModule::getSize(void) const {return this->Size;}
int		AModule::getPosX(void) const {return this->PosX;}
int		AModule::getPosY(void) const {return this->PosY;}
