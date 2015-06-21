/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:51:23 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/16 16:15:55 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : Len(0) { return ; }

Span::Span(unsigned int len) : Len(len) { return ; }

Span::Span(Span const &src) : Len(src.getLen()) { *this = src;}

Span::~Span(void) { return ; }

Span&		Span::operator=(Span const &src)
{
	this->Len = src.getLen();
	this->Lst = src.getLst();
	return *this;
}

unsigned int Span::getLen() const
{
	return this->Len;
}

std::list<int>	Span::getLst() const
{
	return this->Lst;
}

int		Span::longestSpan(void)
{
	if (this->Lst.size() > 1)
	{
		this->Lst.sort();
		return (this->Lst.back() - this->Lst.front());
	}
	return 0;
}

int		Span::shortestSpan(void)
{
	std::list<int>::iterator	it;
	std::list<int>::iterator	it2;
	int				shortest;

	if (this->Lst.size() > 1)
	{
		this->Lst.sort();
		shortest = (this->Lst.back() - this->Lst.front());
		it2 = this->Lst.begin();
		it = it2, it++;
		while (it != this->Lst.end())
		{
			if (*it - *it2 < shortest)
				shortest = *it - *it2;
			it++;
			it2++;
		}
	}
	else
		throw Span::spanException("no span to find");
	return shortest;
}

void	Span::addNumber(int nu)
{
	if ((this->Lst.size()) < this->Len)
	{
		this->Lst.push_back(nu);
	}
	else
		throw Span::spanException("can't add number anymore");
}

void		Span::addNumber(std::list<int>::iterator start, std::list<int>::iterator end)
{
	if ((this->Lst.size()) < this->Len)
	{
		while (this->Lst.size() < this->Len && start!=end)
		{
			this->Lst.push_back(*start);
			start++;
			if (this->Lst.size() == this->Len && start!=end)
				throw Span::spanException("too much elements");
		}
	}
	else
		throw Span::spanException("can't add number anymore");
}

Span::spanException::~spanException(void) throw() {}
Span::spanException::spanException(void) : Msg("Default Span Error") {}
Span::spanException::spanException(const char *msg) : Msg(msg) {}
Span::spanException::spanException(Span::spanException const & g)
{ *this = g;}
Span::spanException& Span::spanException::operator=(Span::spanException const & g)
{
	(void)g;
	return *this;
}
const char* Span::spanException::what() const throw()
{
	return(Msg);
}
