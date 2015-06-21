/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:27:38 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/16 17:53:44 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <list>

template<class T>
class		MutantStack : public std::stack<T>
{
	public:
		unsigned int	size(void) { return this->size();}
	//	MutantStack(void);
	//	MutantStack(MutantStack const &src);
//		~MutantStack(void);
//		MutantStack&			operator=(MutantStack const &src);
//	private:
};

#endif
