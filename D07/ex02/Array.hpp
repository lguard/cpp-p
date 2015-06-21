/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 12:54:35 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/15 16:58:43 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include<iostream>
template<class T>
class		Array
{
	public:
		Array(void) : Tab(NULL), Tlen(0) {}
		Array(unsigned int len) : Tlen(len) { Tab = new T[len];}
		Array(Array const &src) : Tab(NULL), Tlen(0) {*this = src;}
		~Array(void) {}
		unsigned int 		size() const {return this->Tlen;}
		Array<T>&			operator=(Array const &src)
		{
			if (Tlen)
				delete [] Tab;
			this->Tlen = src.size();
			Tab = new T[this->Tlen];
			for (unsigned int i = 0; i < this->Tlen; ++i)
				this->Tab[i] = src[i];
			return *this;
		}
		T&				operator[](unsigned int i) const
		{
			if (i < this->Tlen)
				return this->Tab[i];
			else
				throw Array::OutOfTheLimits();
		}
		class OutOfTheLimits : public std::exception
		{
			public:
				virtual ~OutOfTheLimits(void) throw() {}
				OutOfTheLimits(void) : std::exception() {}
				OutOfTheLimits(OutOfTheLimits const & g) {*this = g;}
				OutOfTheLimits&operator=(OutOfTheLimits const & g) {(void)g;return *this;}
				virtual const char* what() const throw() {return("Out of the limits");}
		};
	private:
		T				*Tab;
		unsigned int	Tlen;
};

#endif
