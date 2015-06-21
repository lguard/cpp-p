/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:51:24 by lguarda          #+#    #+#             */
/*   Updated: 2015/04/16 16:15:53 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include<list>
# include<iostream>

class		Span
{
	public:
		Span(void);
		Span(unsigned int len);
		Span(Span const &src);
		~Span(void);
		void			addNumber(int nu);
		void			addNumber(std::list<int>::iterator start, std::list<int>::iterator end);
		unsigned int	getLen() const;
		std::list<int>	getLst() const;
		int		shortestSpan(void);
		int		longestSpan(void);
		Span&			operator=(Span const &src);
		class spanException : public std::exception
		{
			public:
				virtual ~spanException(void) throw();
				spanException(void);
				spanException(const char *msg);
				spanException(spanException const & g);
				spanException&operator=(spanException const & g);
				virtual const char* what() const throw();
			private:
				const char	*Msg;
		};

	private:
		std::list<int>			Lst;
		unsigned int		Len;
};

#endif
